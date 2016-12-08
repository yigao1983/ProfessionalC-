#include <iostream>
#include <climits>
#include <chrono>

using namespace std;

int main(int argc, char **argv)
{
  using namespace chrono;
  
  steady_clock::time_point t_beg;
  steady_clock::time_point t_end;
  
  t_beg = steady_clock::now();
  
  for (int i = 0; i < 1000000000; ++i) {
    i*i;
  }
  
  t_end = steady_clock::now();
  
  cout << duration_cast<nanoseconds>(t_end-t_beg).count() << endl;
  
  return 0;
}
