#include <iostream>
#include <cstring>

using namespace std;

template <typename T>
int find(T &value, T *arr, int size)
{
  for (int i = 0; i < size; i++) {
    if (arr[i] == value) {
      return i;
    }
  }
  return -1;
}

template <>
int find(char * &value, char **arr, int size)
{
  for (int i = 0; i < size; i++) {
    if (strcmp(arr[i], value) == 0) {
      return i;
    }
  }
  return -1;
}

int main(int argc, char **argv)
{
  int *arr;
  
  arr = new int [10];
  
  for (int i = 0; i < 10; i++) {
    arr[i] = 2*i;
  }
  
  int b = 8;
  
  cout << find(b, arr, 10) << endl;
  
  delete [] arr;
  
  return 0;
}
