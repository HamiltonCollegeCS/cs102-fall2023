/**
 * An array-based stack
 * 
 * @file stack.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date September 29, 2023
*/
#include <iostream>

using namespace std;

const int INITIAL_CAPACITY = 1;

class Stack {
public:
    /**
     * @brief Construct a new Stack object
     */
    Stack() {
        _size = 0;
        _capacity = INITIAL_CAPACITY;
        _stack = new int[_capacity];
    }

    /**
     * @brief Free up memory so it doesn't leak
     */
    ~Stack() {
        delete[] _stack;
    }

    /**
     * @brief Return the item at the top of the stack
     * 
     * @return the item at the top of the stack
     */
    int top() {
        return _stack[_size - 1];
    }

    /**
     * @brief Decrease the size of the stack, effectively
     * removing the top element.
     */
    void pop() {
        _size--;
    }

    /**
     * @brief Place the element x on the top of the stack
     * Resize if necessary
     * 
     * @param x the element to push on the top of the stack
     */
    void push(int x) {
        if (_size == _capacity)
            resize();
        _stack[_size++] = x;
    }

    /**
     * @brief Resize the stack if it surpases the capacity
     */
    void resize() {
        _capacity *= 2;
        int * new_stack = new int[_capacity];
        for (int i = 0; i < _size; i++) {
            new_stack[i] = _stack[i];
        }
        delete[] _stack;
        _stack = new_stack;
    }
    
    /**
     * @brief Get the number of elements in the stack
     * 
     * @return the number of elements in the stack
     */
    unsigned int size() {
        return _size;
    }

    /**
     * @brief Print the stack to standard output
     */
    void display() {
        cout << ">>> The stack is: ";
        if (_size != 0) {
            cout << _stack[0];
        }
        for (int i = 1; i < _size; i++) {
            cout << " " << _stack[i];
        }
        cout << endl;
    }
private:
    unsigned int _size;
    unsigned int _capacity;
    int * _stack; // pointer to an integer.
};

// executes program
int main() {
    Stack edits;
    edits.push(1);
    edits.push(2);
    edits.push(3);
    for (int i = 4; i < 10000; i++)
        edits.push(i);
    cout << "top=" << edits.top() << endl;

    // want to call delete[] and not have memory leak.
    // destructor is called when object is out of scope
    return 0;
}