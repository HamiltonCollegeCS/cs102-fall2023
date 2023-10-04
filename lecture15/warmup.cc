/**
 * What will the output be?
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date October 4, 2023
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

// executes program
int main() {
    // would like
    Node node1(1);
    Node node2(2);
    Node node3(3);

    node1._next = &node2;
    node2._next = &node3;

    Node node4(4);
    node2._next = &node4;
    node4._next = &node3;
    // draw the nodes' contents and their links after doing the following

    // current node
    Node * current = &node1;
    //cout << (*current)._data << endl;
    //cout << current[0]._data << endl;
    // pointer_to_object->data_or_method.
    while (current != nullptr) {
        cout << current->_data << "->";
        current = current->_next;
    }
    cout << endl;
    // loop

    return 0;
}