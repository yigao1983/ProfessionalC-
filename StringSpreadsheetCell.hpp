#ifndef STRINGSPREADSHEETCELL
#define STRINGSPREADSHEETCELL

#include <string>
#include "SpreadsheetCell.hpp"
#include "DoubleSpreadsheetCell.hpp"

using namespace std;

class StringSpreadsheetCell : public SpreadsheetCell
{
public:
  StringSpreadsheetCell();
  StringSpreadsheetCell(const DoubleSpreadsheetCell &inDoubleCell);
  
  virtual void set(const string &inString);
  
  virtual string getString() const;
  
  friend const StringSpreadsheetCell operator+(const StringSpreadsheetCell &lhs,
					       const StringSpreadsheetCell &rhs);
  
protected:
  string mValue;
};

#endif
