/**
 * Make an array-based stack
 * 
 * @file stack.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date September 22, 2023
*/
#include <iostream>

using namespace std;

const int MAX_STACK_SIZE = 100000;

class Stack {
public:
    Stack() {
        _size = 0;
    }
    int top() {
        return _stack[_size - 1];
    }
    void pop() {
        _stack[--_size];
    }
    void push(int x) {
        _stack[_size++] = x;
    }
    unsigned int size() {
        return _size;
    }
private:
    unsigned int _size;
    int _stack[MAX_STACK_SIZE];
};

// executes program
int main() {
    Stack edits;
    edits.push(1);
    cout << "top=" << edits.top() << endl;
    edits.push(2);
    cout << "top=" << edits.top() << endl;
    edits.pop();
    cout << "top=" << edits.top() << endl;
    edits.pop();
    //cout << "top=" << edits.top() << endl;
    return 0;
}