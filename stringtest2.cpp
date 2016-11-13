// stringtest2.cpp

#include <string>
#include <iostream>

using namespace std;

int main()
{
  string str1 = "Hello";
  string str2 = "World";
  string str3 = str1 + " " + str2;
  
  cout << str3 << endl;
  
  if (str3 == "Hello World") {
    cout << "str3 is what it should be." << endl;
  } else {
    cout << "Problem." << endl;
  }
  
  return 0;
}
