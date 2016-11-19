#include <iostream>
#include <cstdio>
#include <cstdarg>

using namespace std;

void debugOut(const char *str, ...)
{
  va_list ap;
  
  va_start(ap, str);
  vfprintf(stdout, str, ap);
  va_end(ap);
}

int main()
{
  debugOut("This is the result, %s\n", "OK");
  
  return 0;
}
