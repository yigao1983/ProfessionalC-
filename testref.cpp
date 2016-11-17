#include <iostream>

using namespace std;

int main()
{
  int *ptr = new int();
  
  cout << *ptr << endl;
  
  delete ptr;
  
  return 0;
}
