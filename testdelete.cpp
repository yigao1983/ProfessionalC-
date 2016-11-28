#include <iostream>

using namespace std;

void delete_func(int *ptr)
{
  delete ptr;
}

int main()
{
  int *ptr = new int(9);
  
  delete_func(ptr);
  
  return 0;
}
