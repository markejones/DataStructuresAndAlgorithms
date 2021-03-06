// DataStructuresAndAlgorithms.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <memory>
#include "Point2D.h"
#include "Stack.h"
#include "LinkedList.h"

int main()
{
  Stack<Point2D*> pointStack;

  try {
    auto pt1 = std::make_shared<Point2D>(5, 10);
    pointStack.push(pt1.get());
    const auto pt = pointStack.pop();
    std::cout << "popped " << pt->getId() << " off the stack\n";
  }
  catch (std::exception e) {
    std::cout << e.what() << std::endl;
  }

  Stack<int> intStack;


  try {
    int five = 5;
    intStack.push(five);
    const auto popped = intStack.pop();
    std::cout << "popped " << popped << " off the stack\n";
  }
  catch (std::exception e) {
    std::cout << e.what() << std::endl;
  }

  LinkedList();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
