// hellovariables.cpp

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
  int uninitialized;
  int initialized = 7;
  
  cout << uninitialized << " is a random value" << endl;
  cout << initialized << " was assigned an initial value" << endl;
  
  return 0;
}
