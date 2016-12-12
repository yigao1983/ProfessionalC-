#ifndef GRID_HPP
#define GRID_HPP

// Grid.hpp
template <typename T>
class Grid
{
public:
  Grid(int inWidth=kDefaultWidth, int inHeight=kDefaultHeight);
  Grid(const Grid<T> &src);
  template <typename E>
  Grid(const Grid<E> &src);
  ~Grid();
  Grid<T> &operator=(const Grid<T> &src);
  template <typename E>
  Grid<T> &operator=(const Grid<E> &src);
  
  void setElementAt(int x, int y, const T &inElem);
  T &getElementAt(int x, int y);
  const T &getElementAt(int x, int y) const;
  int getHeight() const { return mHeight; }
  int getWidth() const { return mWidth; }
  static const int kDefaultWidth = 10;
  static const int kDefaultHeight = 10;
  
protected:
  void copyFrom(const Grid<T> &src);
  template <typename E>
  void copyFrom(const Grid<E> &src);
  T **mCells;
  int mWidth, mHeight;
};

template <typename T>
Grid<T>::Grid(int inWidth, int inHeight) :
  mWidth(inWidth), mHeight(inHeight)
{
  mCells = new T *[mWidth];
  
  for (int i = 0; i < mWidth; i++) {
    mCells[i] = new T[mHeight];
  }
}

template <typename T>
const int Grid<T>::kDefaultWidth;

template <typename T>
const int Grid<T>::kDefaultHeight;

template <typename T>
Grid<T>::Grid(const Grid<T> &src)
{
  copyFrom(src);
}

template <typename T>
template <typename E>
Grid<T>::Grid(const Grid<E> &src)
{
  copyFrom(src);
}

template <typename T>
Grid<T>::~Grid()
{
  // Free the old memory
  for (int i = 0; i < mWidth; i++) {
    delete [] mCells[i];
  }
  delete [] mCells;
}

template <typename T>
void Grid<T>::copyFrom(const Grid<T> &src)
{
  int i, j;
  mWidth = src.mWidth;
  mHeight = src.mHeight;
  
  mCells = new T * [mWidth];
  for (int i = 0; i < mWidth; i++) {
    mCells[i] = new T [mHeight];
  }
  
  for (i = 0; i < mWidth; i++) {
    for (j = 0; j < mHeight; j++) {
      mCells[i][j] = src.mCells[i][j];
    }
  }
}

template <typename T>
template <typename E>
void Grid<T>::copyFrom(const Grid<E> &src)
{
  int i, j;
  mWidth = src.getWidth();
  mHeight = src.mHeight();
  
  mCells = new T * [mWidth];
  for (int i = 0; i < mWidth; i++) {
    mCells[i] = new T [mHeight];
  }
  
  for (i = 0; i < mWidth; i++) {
    for (j = 0; j < mHeight; j++) {
      mCells[i][j] = src.getElementAt(i, j);
    }
  }
}

template <typename T>
Grid<T> &Grid<T>::operator=(const Grid<T> &rhs)
{
  // Check for self-assignment
  if (this == &rhs) {
    return *this;
  }
  // Free the old memory
  for (int i = 0; i < mWidth; i++) {
    delete [] mCells[i];
  }
  delete [] mCells;
  // Copy the new memory
  copyFrom(rhs);
  
  return *this;
}

template <typename T>
template <typename E>
Grid<T> &Grid<T>::operator=(const Grid<E> &rhs)
{
  // Free the old memory
  for (int i = 0; i < mWidth; i++) {
    delete [] mCells[i];
  }
  delete [] mCells;
  // Copy the new memory
  copyFrom(rhs);
  
  return *this;
}

template <typename T>
void Grid<T>::setElementAt(int x, int y, const T &inElem)
{
  mCells[x][y] = inElem;
}

template <typename T>
T &Grid<T>::getElementAt(int x, int y)
{
  return mCells[x][y];
}

template <typename T>
const T &Grid<T>::getElementAt(int x, int y) const
{
  return mCells[x][y];
}

#endif
