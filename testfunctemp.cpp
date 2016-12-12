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
