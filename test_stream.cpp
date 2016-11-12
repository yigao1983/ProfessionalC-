#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char **argv)
{
  string str;
  fstream fp;
    
  fp.open("test.txt");
  /*
  while (fp >> str) {
    cout << str << endl;
  }
  */
  
  while (fp.peek() != EOF) {
    getline(fp, str);
    cout << str << endl;
  }
  
  fp.close();
  
  return 0;
}
