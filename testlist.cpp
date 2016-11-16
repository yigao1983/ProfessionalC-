#include <iostream>
#include <list>

using namespace std;

int main()
{
  list<int> intlist;
  
  for (int i = 0; i < 10; i++) {
    intlist.push_back(i);
  }
  
  for (int i = 0; i < 10; i++) {
    intlist.pop_front();
    if (!intlist.empty()) {
      cout << intlist.front() << endl;
    }
  }
  
  return 0;
}
