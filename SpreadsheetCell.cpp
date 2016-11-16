// SpreadsheetCell.cpp
#include <iostream>
#include <sstream>
#include "SpreadsheetCell.hpp"

SpreadsheetCell::SpreadsheetCell() :
  mValue(0), mString("")
{}
/*
SpreadsheetCell::SpreadsheetCell(double initialValue) :
  mValue(initialValue), mString(doubleToString(mValue))
{}

SpreadsheetCell::SpreadsheetCell(const string &initialString) :
  mValue(stringToDouble(initialString)), mString(initialString)
{}

SpreadsheetCell::SpreadsheetCell(const SpreadsheetCell &src) :
  mValue(src.mValue), mString(src.mString)
{}

SpreadsheetCell &SpreadsheetCell::operator=(const SpreadsheetCell &rhs)
{
  if (this == &rhs) {
    return *this;
  }
  
  mValue = rhs.mValue;
  mString = rhs.mString;
  
  return *this;
}

const SpreadsheetCell SpreadsheetCell::operator+(const SpreadsheetCell &cell) const
{
  SpreadsheetCell newCell;
  newCell.set(mValue + cell.mValue);
  return newCell;
}

const SpreadsheetCell SpreadsheetCell::operator-(const SpreadsheetCell &cell) const
{
  SpreadsheetCell newCell;
  newCell.set(mValue - cell.mValue);
  return newCell;
}

const SpreadsheetCell SpreadsheetCell::operator*(const SpreadsheetCell &cell) const
{
  SpreadsheetCell newCell;
  newCell.set(mValue * cell.mValue);
  return newCell;
}

const SpreadsheetCell SpreadsheetCell::operator/(const SpreadsheetCell &cell) const
{
  SpreadsheetCell newCell;
  if (cell.mValue == 0) {
    newCell.set(0);
  } else {
    newCell.set(mValue + cell.mValue);
  }
  return newCell;
}
*/
void SpreadsheetCell::set(double inValue)
{
  mValue = inValue;
  mString = doubleToString(mValue);
}

void SpreadsheetCell::set(const string &inString)
{
  mString = inString;
  mValue = stringToDouble(mString);
}
/*
double SpreadsheetCell::getValue() const
{
  return mValue;
}
*/
string SpreadsheetCell::getString() const
{
  return mString;
}

string SpreadsheetCell::doubleToString(double inValue)
{
  ostringstream ostr;
  
  ostr << inValue;
  return ostr.str();
}

double SpreadsheetCell::stringToDouble(const string &inString)
{
  double temp;
  istringstream istr(inString);
  
  istr >> temp;
  if (istr.fail() || !istr.eof()) {
    return 0;
  }
  return temp;
}
/*
bool checkSpreadsheetCell(const SpreadsheetCell &cell)
{
  return SpreadsheetCell::stringToDouble(cell.mString) == cell.mValue;
}

const SpreadsheetCell operator+(const SpreadsheetCell &lhs, const SpreadsheetCell &rhs)
{
  SpreadsheetCell newCell;
  newCell.set(lhs.mValue + rhs.mValue);
  return newCell;
}

const SpreadsheetCell operator-(const SpreadsheetCell &lhs, const SpreadsheetCell &rhs)
{
  SpreadsheetCell newCell;
  newCell.set(lhs.mValue - rhs.mValue);
  return newCell;
}

const SpreadsheetCell operator*(const SpreadsheetCell &lhs, const SpreadsheetCell &rhs)
{
  SpreadsheetCell newCell;
  newCell.set(lhs.mValue * rhs.mValue);
  return newCell;
}

const SpreadsheetCell operator/(const SpreadsheetCell &lhs, const SpreadsheetCell &rhs)
{
  SpreadsheetCell newCell;
  if (rhs.mValue == 0) {
    newCell.set(0);
  } else {
    newCell.set(lhs.mValue + rhs.mValue);
  }
  return newCell;
}
*/
