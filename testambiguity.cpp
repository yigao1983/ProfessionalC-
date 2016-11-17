#include <iostream>

using namespace std;

class Super
{
public:
  
  Super() : member(3) {}
  
  virtual ~Super() {}
  
  int member;
};

class Sub : public Super
{
public:
  
  Sub() : Super(), member(4) {}
  
  virtual ~Sub() {}
  
  int member;
};

int main()
{
  Sub sub;
  Super &sup = sub;
  
  cout << sub.member << endl;
  cout << sup.member << endl;
  
  return 0;
}
