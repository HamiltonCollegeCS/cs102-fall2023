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

class PointerBasedStack {
public:
    PointerBasedStack();
    ~PointerBasedStack();

    int top();
    void push(int x);
    void pop();
    unsigned int size();

private:
    Node * _top;
    unsigned int _size;
};

PointerBasedStack::PointerBasedStack() {
    _top = nullptr;
    _size = 0;
}

PointerBasedStack::~PointerBasedStack() {
    //cout << "Calling the destructor..." << endl;
    while (_top != nullptr) {
        pop();
    }
}

int PointerBasedStack::top() {
    return _top->_data;
}

void PointerBasedStack::push(int x) {
    Node * node = new Node(x);
    node->_next = _top;
    _top = node;
    _size++;
}

void PointerBasedStack::pop() {
    //cout << "I'm popping " << _top->_data << endl;
    Node * old_top = _top;
    _top = _top->_next;
    delete old_top;
    _size--;
}

unsigned int PointerBasedStack::size() {
    return _size;
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
    /*
    stack.pop();
    cout << "After popping, top is: " << stack.top() << endl;
    stack.pop();
    cout << "After popping, top is: " << stack.top() << endl;
    stack.pop(); // pops off 1
    */
    return 0;

}