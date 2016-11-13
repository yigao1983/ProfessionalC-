#include <iostream>

using namespace std;

int main()
{
  bool multiArray[3][3];
  bool *p;
  
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      p = &multiArray[i][j];
      cout << p << endl;
    }
  }
  
  return 0;
}
