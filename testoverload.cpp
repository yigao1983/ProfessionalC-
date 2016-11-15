#include <iostream>

using namespace std;

void test(int a=0)
{
  cout << a << endl;
}

void test(double a, int b=1)
{
  cout << a << " " << b << endl;
}

int main()
{
  test();
  test(1.);
  
  return 0;
}
