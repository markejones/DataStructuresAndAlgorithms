#pragma once
#include <memory>
#include <iostream>
#include <string>
#include "Point2D.h"

class Node {
public:
  int data;
  const Node *next;
};


void LinkedList() {
  std::cout << "Singly linked list implementation\n --------------- \n";

  Node* node1 = new Node();
  Node* node2 = new Node();
  Node* node3 = new Node();



  node1->data = 1;
  node1->next = node2;
  node2->data = 2;
  node2->next = node3;
  node3->data = 3;
  node3->next = nullptr;

  delete node1;
}