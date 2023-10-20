/**
 * Singly-linked list
 * 
 * @file SinglyLinkedList.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date October 20, 2023
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
    Node * get_node(int i);
    Node * get_node(Node * current, int i);
    void set(int i, int x);
    int get(int i);
    void insert(int i, int x);
private:
    Node * _head;
    Node * _tail;
};

SinglyLinkedList::SinglyLinkedList() {
    _head = nullptr;
}

Node * SinglyLinkedList::get_node(int i) {
    // Plan:
    Node * current = _head;
    //for () {
    //
    //}
    return current;
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

// executes program
int main() {
    SinglyLinkedList list;
    list.insert(0, 100);
    list.insert(1, 200);
    cout << "list at 0 is" << list.get(0) << endl;
    cout << "list at 1 is" << list.get(1) << endl;
    return 0;
}