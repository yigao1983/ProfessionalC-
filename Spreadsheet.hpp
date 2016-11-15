// Spreadsheet.hpp
#ifndef SPREADSHEET
#define SPREADSHEET

#include "SpreadsheetCell.hpp"

class Spreadsheet
{
public:
  
  static const int kMaxWidth  = 100;
  static const int kMaxHeight = 100;
  
  Spreadsheet(int inWidth = kMaxWidth, int inHeight = kMaxHeight);
  Spreadsheet(const Spreadsheet &src);
  ~Spreadsheet();
  
  Spreadsheet &operator=(const Spreadsheet &rhs);
  
  void setCellAt(int x, int y, const SpreadsheetCell &cell);
  SpreadsheetCell getCellAt(int x, int y);
  int getId();
  
protected:
  bool inRange(int val, int upper);
  
  int mWidth, mHeight;
  int mId;
  SpreadsheetCell **mCells;
  
  static int sCounter;
  
private:
  void copyFrom(const Spreadsheet &src);
};

#endif
