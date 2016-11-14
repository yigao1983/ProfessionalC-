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
  SpreadsheetCell(string initialString);
  void setValue(double inValue);
  double getValue();
  void setString(string inString);
  string getString();
  
protected:
  string doubleToString(double inValue);
  double stringToDouble(string inString);
  
  double mValue;
  string mString;
};

#endif
