#pragma once
#include <stdexcept>
#include <memory>
#include "Point2D.h"

template <class T>
class Stack {
private:
  T _stack[100];
  int _top = -1;

public:
  void push(const T& arg) {
    if (isFull()) {
      throw std::overflow_error("Stack overflow");
    }

    // TODO: Stop casting to point and do this instead
    // https://stackoverflow.com/a/30687399
    // const auto point = static_cast<Point2D*>(arg);
    std::cout << "Pushing object stored at " << arg << " onto stack\n";

    _stack[++_top] = arg;
  };

  const auto pop() {
    if (isEmpty()) {
      throw std::underflow_error("Stack underflow");
    }

    const auto ret = _stack[_top];
    _top -= 1;

    if (_top == -1) {
      std::cout << "Stack is now empty\n";
    }

    return ret;
  }

  bool isEmpty() {
    return _top == -1;
  }

  bool isFull() {
    return _top == 99;
  }
};
