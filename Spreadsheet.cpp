#include "Spreadsheet.hpp"

int Spreadsheet::sCounter = 0;

Spreadsheet::Spreadsheet(int inWidth, int inHeight) :
  mWidth(inWidth < kMaxWidth ? inWidth : kMaxWidth),
  mHeight(inHeight < kMaxHeight ? inHeight : kMaxHeight)
{
  mId = sCounter++;
  mCells = new SpreadsheetCell *[mWidth];
  for (int i = 0; i < mWidth; i++) {
    mCells[i] = new SpreadsheetCell[mHeight];
  }
}

Spreadsheet::Spreadsheet(const Spreadsheet &src)
{
  mId = sCounter++;
  copyFrom(src);
}

void Spreadsheet::copyFrom(const Spreadsheet &src)
{
  mWidth  = src.mWidth;
  mHeight = src.mHeight;
  
  mCells = new SpreadsheetCell *[mWidth];
  for (int i = 0; i < mWidth; i++) {
    mCells[i] = new SpreadsheetCell[mHeight];
  }
  
  for (int i = 0; i < mWidth; i++) {
    for (int j = 0; j < mHeight; j++) {
      mCells[i][j] = src.mCells[i][j];
    }
  }
}

Spreadsheet::~Spreadsheet()
{
  for (int i = 0; i < mHeight; i++) {
    delete[] mCells[i];
  }
  
  delete[] mCells;
}

Spreadsheet &Spreadsheet::operator=(const Spreadsheet &rhs)
{
  if (this == &rhs) {
    return *this;
  }
  
  for (int i = 0; i < mWidth; i++) {
    delete[] mCells[i];
  }
  
  delete[] mCells;
  
  copyFrom(rhs);
  
  return *this;
}

void Spreadsheet::setCellAt(int x, int y, const SpreadsheetCell &cell)
{
  if (!inRange(x, mWidth) || !inRange(y, mHeight)) {
    return;
  }
  
  mCells[x][y] = cell;
}

SpreadsheetCell Spreadsheet::getCellAt(int x, int y)
{
  SpreadsheetCell empty;
  
  if (!inRange(x, mWidth) || !inRange(y, mHeight)) {
    return empty;
  }
  
  return mCells[x][y];
}

int Spreadsheet::getId()
{
  return mId;
}
