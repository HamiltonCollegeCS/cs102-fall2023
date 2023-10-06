/**
 * An array-based stack
 * 
 * @file PointerBasedStack.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date October 6, 2023
*/
#include <iostream>

using namespace std;

class Node {
public:
    Node(int data) {
        _data = data;
        _next = nullptr;
    }

    void hello() {
        cout << "hello" << endl;
    }

    int _data;
    Node * _next;
};

class PointerBasedStack {
public:
    PointerBasedStack();
    int top();
    void push(int x);
    void pop();
    unsigned int size();

private:
    Node * _top;
};

PointerBasedStack::PointerBasedStack() {
    _top = nullptr;
}


int PointerBasedStack::top() {
    return _top->_data;
}

void PointerBasedStack::push(int x) {
    Node * node = new Node(x);
    node->_next = _top;
    _top = node;
}

// executes program
int main() {
    PointerBasedStack stack;
    stack.push(1);
    cout << "After pushing 1, top is: " << stack.top() << endl;
    stack.push(2);
    cout << "After pushing 2, top is: " << stack.top() << endl;
    stack.push(3);
    cout << "After pushing 3, top is: " << stack.top() << endl;
    return 0;
}