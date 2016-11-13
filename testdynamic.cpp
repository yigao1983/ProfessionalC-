#include <iostream>

using namespace std;

int main()
{
  const int arraySize = 10;
  
  int *array = new int[arraySize];
  
  cout << array[1] << endl;
  
  delete[] array;
  
  return 0;
}
