/* SinglyLinkedList.cpp
   Abstract Data Type by Darren Strash
   Implementation and slight ADT enhancements by Alistair Campbell

   CS 111, Data Structures
   Friday October 4, 2019 */

#include "Stack.h"
#include <iostream>

using namespace std;

template <class T>
Node<T>::Node(T const value) {
    _value = value;
    _next = nullptr; // nullptr is new, students have only seen 0
}

template <class T>
void Node<T>::set_next(Node *new_next) {
    _next = new_next;
}

template <class T>
Node<T> *Node<T>::get_next() const {
    return _next;
}

template <class T>
void Node<T>::set_value(T const new_value) {
    _value = new_value;
}

template <class T>
T Node<T>::get_value() const {
    return _value;
}

template <class T>
SinglyLinkedList<T>::SinglyLinkedList()
{
    // -1: show
    _head = nullptr;
    _tail = nullptr;
    _size = 0;
}

template <class T>
SinglyLinkedList<T>::~SinglyLinkedList()
{
    // Destructor deletes all nodes:
    clear();
}

template <class T>
void SinglyLinkedList<T>::clear()
{
    // Delete all nodes, restore list as empty list.
    // 1b. do in class
    while (_head != nullptr)
        remove_first();    
}

template <class T>
void SinglyLinkedList<T>::add_first(T const value_to_add)
{
    _size++;
    // 1. do on board, then show
    Node<T> *baby = new Node<T>(value_to_add);
    baby->set_next(_head);
    _head = baby;
    if (_tail == nullptr) { // the first add!
        _tail = baby;
    }
}

template <class T>
void SinglyLinkedList<T>::add_last(T const value_to_add)
{
    _size++;
    // 2. do in groups
    Node<T> *baby = new Node<T>(value_to_add);
    if (_head == nullptr)
        _head = baby;
    else
        _tail->set_next(baby);
    _tail = baby;
}

// Precondition: linked list stores at least one element.
template <class T>
void SinglyLinkedList<T>::remove_first()
{
    _size--;
    Node<T> *old = _head;  // we know _head can't be nullptr because
    // of the precondition.
    _head = _head->get_next();
    if (_head == nullptr)  // but now it might be if it was a singleton coming
        // in
        _tail = nullptr;
    delete old;    
}

// Precondition: linked list stores at least one element.
template <class T>
void SinglyLinkedList<T>::remove_last()
{
    _size--;
    // 3b. do together
    Node<T> *old = _tail;
    if (_head == _tail) { // singleton
        _head = _tail = nullptr;
    }
    else {
        Node<T> *penultimate = _head;
        while (penultimate->get_next() != _tail)
            penultimate = penultimate->get_next();
        _tail = penultimate;
        _tail->set_next(nullptr);
    }
    delete old;
}

template <class T>
T SinglyLinkedList<T>::get(size_t const index) {
    return _head->get_value();
}

template <class T>
size_t SinglyLinkedList<T>::size() const {
    return _size;
}

template <class T>
void SinglyLinkedList<T>::output(ostream &ostr) const
{
    ostr << '[';               // Output open bracket
    Node<T> *p = _head;
    while (p != nullptr) {     // For every node,
        ostr << p->get_value();  //   print its value
        p = p->get_next();       //   and move on to the next node
        if (p != nullptr)        //   If it exists, print a comma-space
            ostr << ", ";
    }
    ostr << ']';               // Output close bracket
}

template <class T>
Stack<T>::Stack() {
}

template <class T>
void Stack<T>::push(T const &element) {
    _list.add_first(element);
}

template <class T>
T Stack<T>::pop() {
    T popped_element = _list.get(0);
    _list.remove_first();
    return popped_element;
}

template <class T>
size_t Stack<T>::size() const {
    return _list.size();
}

template class Node<int>;
template class SinglyLinkedList<int>;
template class Stack<int>;
