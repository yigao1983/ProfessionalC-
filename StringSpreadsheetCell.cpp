#include "StringSpreadsheetCell.hpp"

StringSpreadsheetCell::StringSpreadsheetCell() :
  mValue("NA")
{}

void StringSpreadsheetCell::set(const string &inString)
{
  mValue = inString;
}

string StringSpreadsheetCell::getString() const
{
  return mValue;
}
