#include <iostream>

using namespace std;

class Foo
{
public:
  virtual void overload()
  { cout << "Foo's overload()" << endl; }
  
  virtual void overload(int i)
  { cout << "Foo's overload(int i)" << endl; }
};

class Bar
{
public:
  virtual void overload()
  { cout << "Bar's overload()" << endl; }
};

int main()
{
  Bar bar;
  
  bar.overload();
  
  return 0;
}
