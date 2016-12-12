#include <iostream>
#include "Grid.hpp"

void processIntGrid(Grid<int> &inGrid)
{
  
}

int main(int argc, char **argv)
{
  Grid<int> myIntGrid; // Declares a grid that stores ints
  myIntGrid.setElementAt(0, 0, 10);
  int x = myIntGrid.getElementAt(0, 0);
  
  std::cout << x << std::endl;
  
  Grid<int> grid2(myIntGrid);
  Grid<int> anotherIntGrid;
  
  processIntGrid(myIntGrid);
 
  Grid<char *> myCharGrid(100, 100);
   
  return 0;
}
