/**
 * Write maximum() method.
 * 
 * @file warmup.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date November 10, 2023
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

    void recursive_print(const Node * current) const {
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

    bool empty() const {
        return _root == nullptr;
    }

    int max() const {
        assert(_root != nullptr);
        return recursive_max(_root);
    }

    int recursive_max(const Node * current) const {
        if (current->_right == nullptr) {
            return current->_data;
        }
        // recursive case
        return recursive_max(current->_right);
    }

    void postorder_print() {
        recursive_postorder_print(_root);
        cout << endl;
    }

    void recursive_postorder_print(Node * current) {
        if (current != nullptr) {
            recursive_postorder_print(current->_left);
            recursive_postorder_print(current->_right);
            cout << current->_data << " ";
        }
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
    bst.insert(30);
    bst.insert(18);
    bst.insert(10);
    bst.insert(23);
    bst.insert(20);
    bst.insert(40);
    bst.insert(31);
    bst.insert(35);
    bst.insert(58);
    bst.insert(63);

    bst.postorder_print();
    
    return 0;
}