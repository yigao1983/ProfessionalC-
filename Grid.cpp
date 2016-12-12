#include <cstdlib>
#include <cstring>

#include "Grid.hpp"

template <>
class Grid<char *>
{
public:
  Grid(int inWidth = kDefaultWidth, int inHeight = kDefaultHeight);
  Grid(const Grid<char *> &src);
  ~Grid();
  Grid<char *> &operator=(const Grid<char *> &rhs);
  
  void setElementAt(int x, int y, const char *inElem);
  char *getElementAt(int x, int y) const;
  
  int getHeight() const { return mHeight; }
  int getWidth() const { return mWidth; }
  static const int kDefaultWidth = 10;
  static const int kDefaultHeight = 10;
  
protected:
  void copyFrom(const Grid<char *> &src);
  char ***mCells;
  int mWidth, mHeight;
};

const int Grid<char *>::kDefaultWidth;
const int Grid<char *>::kDefaultHeight;

Grid<char *>::Grid(int inWidth, int inHeight) : mWidth(inWidth), mHeight(inHeight)
{
  mCells = new char ** [mWidth];
  for (int i = 0; i < mWidth; i++) {
    mCells[i] = new char * [mHeight];
    for (int j = 0; j < mHeight; j++) {
      mCells[i][j] = NULL;
    }
  }
}

void Grid<char *>::copyFrom(const Grid<char *> &src)
{
  int i, j;
  mWidth = src.mWidth;
  mHeight = src.mHeight;
  
  mCells = new char ** [mWidth];
  for (i = 0; i < mWidth; i++) {
    mCells[i] = new char * [mHeight];
  }
  
  for (i = 0; i < mWidth; i++) {
    for (j = 0; j < mHeight; j++) {
      if (src.mCells[i][j] == NULL) {
        mCells[i][j] = NULL;
      } else {
        mCells[i][j] = new char [strlen(src.mCells[i][j])+1];
        strcpy(mCells[i][j], src.mCells[i][j]);
      }
    }
  }
}

Grid<char *>::Grid(const Grid<char *> &src)
{
  copyFrom(src);
}

Grid<char *>::~Grid()
{
  // Free the old memory
  for (int i = 0; i < mWidth; i++) {
    for (int j = 0; j < mHeight; j++) {
      delete [] mCells[i][j];
    }
    delete [] mCells[i];
  }
  delete [] mCells;
}

Grid<char *> &Grid<char *>::operator=(const Grid<char *> &rhs)
{
  int i, j;
  // Check for self-assignment
  if (this == &rhs) {
    return *this;
  }
  // Free the old memory
  for (i = 0; i < mWidth; i++) {
    for (j = 0; j < mHeight; j++) {
      delete [] mCells[i][j];
    }
    delete [] mCells[i];
  }
  delete [] mCells;
  
  // Copy the new memory
  copyFrom(rhs);
  
  return *this;
}

void Grid<char *>::setElementAt(int x, int y, const char *inElem)
{
  delete [] mCells[x][y];
  
  if (inElem == NULL) {
    mCells[x][y] = NULL;
  } else {
    mCells[x][y] = new char [strlen(inElem)+1];
    strcpy(mCells[x][y], inElem);
  }
}

char *Grid<char *>::getElementAt(int x, int y) const
{
  if (mCells[x][y] == NULL) {
    return NULL;
  } else {
    char *ret = new char [strlen(mCells[x][y])+1];
    strcpy(ret, mCells[x][y]);
    return ret;
  }  
}
