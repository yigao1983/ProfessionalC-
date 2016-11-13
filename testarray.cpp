#include <iostream>

using namespace std;

int main()
{
  int myArray[10];
  
  for (int i = 0; i < 10; i++) {
    myArray[i] = i;
  }
  
  cout << myArray[5] << endl;
  
  return 0;
}
