#include <iostream>
#include <climits>
#include <chrono>

using namespace std;

int main(int argc, char **argv)
{
  chrono::steady_clock::time_point t_beg;
  chrono::steady_clock::time_point t_end;
  
  t_beg = chrono::steady_clock::now();
  
  for (int i = 0; i < INT_MAX; ++i) {
    i*i;
  }
  
  t_end = chrono::steady_clock::now();
  
  cout << INT_MAX << endl;
  cout << chrono::duration_cast<chrono::microseconds>(t_end-t_beg).count() << endl;
  
  return 0;
}
