#include <iostream>

using namespace std;

class Thing
{
public:
  
  static void show_self();
  
};

void Thing::show_self()
{
  cout << "In thing" << endl;
}

int main()
{
  Thing::show_self();
  
  return 0;
}
