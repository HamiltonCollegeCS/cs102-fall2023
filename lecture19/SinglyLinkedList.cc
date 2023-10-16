/**
 * A pointer-based stack
 * 
 * @file PointerBasedStack.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date October 9, 2023
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
private:
    Node * _head;
    Node * _tail;
};

Node * SinglyLinkedList::get_node(int i) {
    // Plan:
    Node * current = _head;
    //for () {
    //
    //}
    return current;
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