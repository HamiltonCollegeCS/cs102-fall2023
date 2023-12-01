/**
 * Make a vector-based stack
 * 
 * @file stack.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date December 1, 2023
*/
#include <iostream>
#include <vector>

using namespace std;
template <typename T>
class Stack {
public:
    Stack() {
    }
    T top() const {
        return _stack.back();
    }
    void pop() {
        _stack.pop_back();
    }
    void push(const T & x) {
        _stack.push_back(x);
    }
    unsigned int size() const {
        return _stack.size();
    }
private:
    vector<T> _stack;
};

// executes program
int main() {
    Stack<int> edits;
    edits.push(1);
    cout << "top=" << edits.top() << endl;

    Stack<string> string_stack;
    string_stack.push("hi and 3 billion more characters");
    cout << "top=" << string_stack.top() << endl;

    return 0;
}