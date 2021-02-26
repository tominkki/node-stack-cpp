#ifndef STACK_H
#define STACK_H

#include "../node/node.h"

template<typename T>
class Stack {
  private:
    Node<T> *_top;
    int _count;

  public:
    Stack(void);
    ~Stack();

    T top(void) const;
    void push(const T item);
    T pop(void);

    bool empty(void) const;
    int size(void) const;
};

#include "stack.cc"

#endif