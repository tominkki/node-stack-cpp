#include "stack.h"

template<typename T>
Stack<T>::Stack(void)
  : _top(nullptr), _count(0) {}

template<typename T>
Stack<T>::~Stack() {
  while (!this->empty()) {
    this->pop();
  }
}

template<typename T>
T Stack<T>::top(void) const {
  if (this->empty()) {
    throw "Stack is empty";
  }
  return this->_top->_value;
}

template<typename T>
void Stack<T>::push(const T item) {
  if (this->empty()) {
    this->_top = new Node<T>(item);
  } else {
    this->_top = new Node<T>(item, this->_top);
  }
  this->_count++;
}

template<typename T>
T Stack<T>::pop(void) {
  T value;
  Node<T> *tmp;

  if (this->empty()) {
    throw "Stack is empty";
  } else if (this->size() == 1) {
    value = this->_top->_value;
    delete this->_top;
    this->_top = nullptr;
  } else {
    value = this->_top->_value;
    tmp = this->_top;
    this->_top = this->_top->_prev;
    delete tmp;
  }
  this->_count--;

  return value;
}

template<typename T>
bool Stack<T>::empty(void) const {
  return this->_count == 0;
}

template<typename T>
int Stack<T>::size(void) const {
  return this->_count;
}
