#ifndef STACK_H
#define STACK_H

/* SinglyLinkedList.cpp
   Abstract Data Type by Darren Strash
   Implementation and slight ADT enhancements by Alistair Campbell

   CS 111, Data Structures
   Friday October 4, 2019 */

#include <iostream>

using namespace std;

template <class T>
class Node {
public:
    Node(T const value);

    void set_next(Node *new_next);

    Node<T> *get_next() const;

    void set_value(T const new_value);

    T get_value() const;

private:
    int _value;
    Node<T>* _next;
};  // end class Node

template <class T>
class SinglyLinkedList {
public:
    SinglyLinkedList();
    ~SinglyLinkedList();

    void   clear();
    void   add_first(T const value_to_add);
    void   add_last(T const value_to_add);
    void   remove_first();
    void   remove_last();
    T      get(size_t const index);
    size_t size() const;
    void   output(ostream &ostr) const;

private:
    Node<T> *_head;  // pointer to first node.  nullptr if no nodes.
    Node<T> *_tail;  // pointer to last node.
    size_t   _size;
};

template <class T>
class Stack {
public:
    Stack();

    void push(T const &element);

    T pop();

    size_t size() const;

private:
    SinglyLinkedList<T> _list;
};
#endif // STACK_H
