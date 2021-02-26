#ifndef NODE_H
#define NODE_H

template<typename T>
class Node {
  public:
    T _value;
    Node<T> *_prev;

    Node(T value, Node<T> *prev = nullptr);
    ~Node();
};

#include "node.cc"

#endif
