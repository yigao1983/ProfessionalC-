#include <iostream>

using namespace std;

template<class T>
void sort(T array[], int inSize)
{
  for (int i = 1; i < inSize; i++) {
    T element = array[i];
    
    int j = i-1;
    while (j >=0 && array[j] > element) {
      array[j+1] = array[j];
      j--;
    }
    
    array[j+1] = element;
  }  
}

int main()
{
  int *array = new int[10];
  
  for (int i = 0; i < 10; i++) {
    array[i] = 10-i;
  }
  
  sort(array, 10);
  
  for (int i = 0; i < 10; i++) {
    cout << array[i] << endl;
  }
  
  delete[] array;
}
