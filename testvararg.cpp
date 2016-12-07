#include <cstdio>
#include <cstdarg>

bool debug = false;

void debugOut(char *str, ...)
{
  va_list ap;
  
  if (debug) {
    va_start(ap, str);
    vfprintf(stderr, str, ap);
    va_end(ap);
  }
}

int main()
{
  debugOut("Hello", "world", "!");
	   
  return 0;
}
