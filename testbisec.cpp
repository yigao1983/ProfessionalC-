#include <iostream>
#include <climits>

using namespace std;

template<class T>
int bisec(T val, int lo, int hi, T array[])
{
  while (lo <= hi) {
    
    int mid = (lo + hi) / 2;
    
    if (array[mid] < val) {
      lo = mid + 1;
    } else if (array[mid] > val) {
      hi = mid - 1;
    } else {
      return mid;
    }
  }
  
  return INT_MIN;
}

int main()
{
  int a[10];
  
  for (int i = 0; i < 10; ++i) {
    a[i] = i;
  }
  
  cout << bisec<int>(94, 0, 9, a) << endl;
  
  return 0;
}
