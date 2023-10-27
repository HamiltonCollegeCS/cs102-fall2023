#include <iostream>

using namespace std;

/**
 * Singly-linked list
 * 
 * @file SinglyLinkedList.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date October 23, 2023
*/
#include <iostream>

using namespace std;

class Node {
public:
    Node(int data) {
        _data = data;
        _next = nullptr;
    }

    int _data;
    Node * _next;
};

class SinglyLinkedList {
public:
    SinglyLinkedList();
    ~SinglyLinkedList();
    void set(int i, int x);
    int get(int i);
    void insert(int i, int x);
    void insert_in_order(int i);
private:
    Node * _head;

    Node * get_node(int i);
    Node * get_node(Node * current, int i);

    void recursive_delete(Node * current);
};

SinglyLinkedList::~SinglyLinkedList() {
    recursive_delete(_head);
}

void SinglyLinkedList::recursive_delete(Node * current) {
    if (current != nullptr) {
        recursive_delete(current->_next);
        delete current;
    }
}

SinglyLinkedList::SinglyLinkedList() {
    _head = nullptr;
}

Node * SinglyLinkedList::get_node(int i) {
    return get_node(_head, i);
}

Node * SinglyLinkedList::get_node(Node * current, int i) {
    if (i == 0) {
        return current;
    } else {
        return get_node(current->_next, i - 1);
    }
}

void SinglyLinkedList::set(int i, int x) {
    get_node(i)->_data = x;
}

int SinglyLinkedList::get(int i) {
    return get_node(i)->_data;
}

void SinglyLinkedList::insert(int i, int x) {
    Node * baby = new Node(x);
    if (i == 0) {
        baby->_next = _head;
        _head = baby;
    } else {
        Node * before = get_node(i - 1);
        baby->_next = before->_next;
        before->_next = baby;
    }
}

void SinglyLinkedList::insert_in_order(int i) {
    Node * baby = new Node(i);

    // handle corner cases
    if (_head == nullptr) {
        _head = baby;
        return;
    } else if (_head->_data >= i) {
        baby->_next = _head;
        _head = baby;
        return;
    }

    // find where i fits in list
    Node * before = _head;
    while (before->_next != nullptr) {
        if (before->_next->_data >= i) {
            break;
        }
        before = before->_next;
    }

    // add i to the list
    baby->_next = before->_next;
    before->_next = baby;
}

// executes program
int main() {
    SinglyLinkedList list;
    list.insert_in_order(1);
    list.insert_in_order(2);
    list.insert_in_order(4);
    list.insert_in_order(0);
    list.insert_in_order(3);
    
    cout << "list is " << list.get(0) << " -> " << list.get(1) << " -> ";
    cout << list.get(2) << " -> " << list.get(3) << " -> " << list.get(4) << endl;

    //get_node(1)->_next = nullptr;
    return 0;
}