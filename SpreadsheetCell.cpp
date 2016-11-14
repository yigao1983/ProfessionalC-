// SpreadsheetCell.cpp
#include <iostream>
#include <sstream>
#include "SpreadsheetCell.hpp"

SpreadsheetCell::SpreadsheetCell() :
  mValue(0), mString("")
{}

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

void SpreadsheetCell::setValue(double inValue)
{
  mValue = inValue;
  mString = doubleToString(mValue);
}

double SpreadsheetCell::getValue()
{
  return mValue;
}

void SpreadsheetCell::setString(const string &inString)
{
  mString = inString;
  mValue = stringToDouble(mString);
}

string SpreadsheetCell::getString()
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
