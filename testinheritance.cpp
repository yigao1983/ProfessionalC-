#include <iostream>

using namespace std;

class Super
{
public:
  
  virtual ~Super() {}
  
  virtual void someMethod()
  {
    cout << "some method" << endl;
  }
  
protected:
  int mProtectedInt;
  
private:
  int mPrivateInt;
};

class Sub : public Super
{
public:
  
  virtual ~Sub() {}
  
  virtual void someMethod()
  {
    cout << "some method in sub" << endl;
  }
  
  virtual void someOtherMethod()
  {
    cout << "some other method" << endl;
  }
};

int main()
{
  Super super;
  
  super.someMethod();
  
  Sub sub;
  
  sub.someMethod();
  
  Super &superRef = sub;
  
  superRef.someMethod();
  // superRef.someOtherMethod(); // this cannot compile!
  
  Super anotherSuper = sub;
  
  anotherSuper.someMethod();
  
  return 0;
}

