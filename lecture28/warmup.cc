/**
 * Write maximum() method.
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date November 1, 2023
*/
#include <iostream>

using namespace std;
#include <iostream>
#include <cmath>
#include <climits>
#include <cassert>

using namespace std;

class Node {
public:
    Node(int data) {
        _data = data;
        _left = nullptr;
        _right = nullptr;
    }

    int _data;
    Node * _left;
    Node * _right;
};

class BinarySearchTree {
public:
    BinarySearchTree() {
        _root = nullptr;
    }

    void insert(int x) {
        recursive_insert(_root, x);
    }

    void print() {
        recursive_print(_root);
    }

    void recursive_print(Node * current) {
        if (current != nullptr) {
            recursive_print(current->_left);
            cout << current->_data << " ";
            recursive_print(current->_right);
        }
    }

    void recursive_insert(Node * & current, int x) {
        if (current == nullptr) {
            current = new Node(x);
            return;
        }
        if (x > current->_data) {
            recursive_insert(current->_right, x);
        } else {
            recursive_insert(current->_left, x);
        }
    }

    bool empty() {
        return _root == nullptr;
    }

    int max() {
        return recursive_max(_root);
    }

    int recursive_max(Node * current) {
        assert(current != nullptr);
        if (current->_right == nullptr) {
            return current->_data;
        }
        // recursive case
        return recursive_max(current->_right);
    }
private:
    Node * _root;
};

// executes program
int main() {
    // Constructs the tree:
    //           3
    //         /   \
    //        1     4
    //               \
    //                5
    BinarySearchTree bst;
    //bst.insert(3);
    //bst.insert(1);
    //bst.insert(4);
    //bst.insert(5);
    
    // write the method max, and any helper methods you need
    if (!bst.empty()) {
        cout << "max=" << bst.max() << endl;
    } else {
        // programmer handles it.
        cout << "I'm handling it..." << endl;
    }

    return 0;
}