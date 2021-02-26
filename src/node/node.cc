#include "node.h"

template<typename T>
Node<T>::Node(T value, Node<T> *prev)
  : _value(value), _prev(prev) {}

template<typename T>
Node<T>::~Node() {}
