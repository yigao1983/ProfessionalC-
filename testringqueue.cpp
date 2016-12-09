#include <iostream>
#include "RingQueue.hpp"

using namespace std;

int main(int argc, char **argv)
{
  const int N = 3;
  RingQueue<int, N> ring;
  
  ring.push_back(9);
  ring.push_back(1);
  ring.push_back(3);
  ring.push_back(4);
  
  cout << ring.size() << endl;
  
  return 0;
}
