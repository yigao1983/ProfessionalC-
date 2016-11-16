#include "StringSpreadsheetCell.hpp"

StringSpreadsheetCell::StringSpreadsheetCell() :
  mValue("NA")
{}

StringSpreadsheetCell::StringSpreadsheetCell(const DoubleSpreadsheetCell &inDoubleCell) :
  mValue(inDoubleCell.getString())
{}

void StringSpreadsheetCell::set(const string &inString)
{
  mValue = inString;
}

string StringSpreadsheetCell::getString() const
{
  return mValue;
}

const StringSpreadsheetCell operator+(const StringSpreadsheetCell &lhs,
				      const StringSpreadsheetCell &rhs)
{
  StringSpreadsheetCell newCell;
  newCell.set(lhs.getString() + rhs.getString());
  return newCell;
}
