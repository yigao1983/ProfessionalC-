#include <iostream>
#include "BinSearchTree.hpp"

using namespace std;

int main()
{
  BinSearchTree<int> tree;
  
  tree.push_back(8);
  tree.push_back(4);
  tree.push_back(9);
  tree.push_back(1);
  tree.push_back(10);
  tree.push_back(2);
  tree.push_back(3);
  tree.push_back(7);
  
  tree.display();
  
  return 0;
}
