#pragma once
#include <memory>
#include <iostream>
#include <string>
#include "Point2D.h"


class Node {
private:
  int _data;
public:
  Node(int data) { _data = data; }
  ~Node() { next.release(); }
  std::unique_ptr<Node> next;
};


void LinkedList() {
  std::cout << "Singly linked list implementation\n --------------- \n";

  auto node1 = std::make_unique<Node>(1);
  node1->next = nullptr;
  auto node2 = std::make_unique<Node>(2);
  node2->next = std::move(node1);
  auto node3 = std::make_unique<Node>(3);
  node3->next = std::move(node2);
}