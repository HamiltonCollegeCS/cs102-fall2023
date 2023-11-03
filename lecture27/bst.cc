/**
 * binary search trees
 * 
 * @file bst.cc
 * @author Darren Strash
 * @collaborators CS 102 -- Fall 2023
 * @date November 3, 2023
*/
#include <iostream>

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
private:
    Node * _root;
};

// executes program
int main() {
    // Construct the tree:
    //           3
    //         /   \
    //        1     4
    BinarySearchTree bst;
    bst.insert(3);
    bst.insert(1);
    bst.insert(4);
    bst.insert(5);
    bst.print();

    return 0;
}