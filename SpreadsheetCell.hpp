// SpreadsheetCell.hpp
#ifndef SPREADSHEETCELL
#define SPREADSHEETCELL

#include <string>

using namespace std;

class SpreadsheetCell
{
public:
  SpreadsheetCell();
  SpreadsheetCell(double initialValue);
  SpreadsheetCell(const string &initialString);
  SpreadsheetCell(const SpreadsheetCell &src);
  SpreadsheetCell &operator=(const SpreadsheetCell &rhs);
  void setValue(double inValue);
  double getValue();
  void setString(const string &inString);
  string getString();
  
protected:
  string doubleToString(double inValue);
  double stringToDouble(const string &inString);
  
  double mValue;
  string mString;
};

#endif
