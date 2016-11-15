// SpreadsheetCell.hpp
#ifndef SPREADSHEETCELL
#define SPREADSHEETCELL

#include <string>

using namespace std;

class SpreadsheetCell
{
public:
  friend class Spreadsheet;
  
  SpreadsheetCell();
  SpreadsheetCell(double initialValue);
  SpreadsheetCell(const string &initialString);
  SpreadsheetCell(const SpreadsheetCell &src);
  
  SpreadsheetCell &operator=(const SpreadsheetCell &rhs);
  const SpreadsheetCell operator+(const SpreadsheetCell &cell) const;
  const SpreadsheetCell operator-(const SpreadsheetCell &cell) const;
  const SpreadsheetCell operator*(const SpreadsheetCell &cell) const;
  const SpreadsheetCell operator/(const SpreadsheetCell &cell) const;
  
  void set(double inValue);
  void set(const string &inString);
  double getValue() const {return mValue;}
  string getString() const {return mString;}
  
  friend bool checkSpreadsheetCell(const SpreadsheetCell &cell);
  friend const SpreadsheetCell operator+(const SpreadsheetCell &lhs,
					 const SpreadsheetCell &rhs);
  friend const SpreadsheetCell operator-(const SpreadsheetCell &lhs,
					 const SpreadsheetCell &rhs);
  friend const SpreadsheetCell operator*(const SpreadsheetCell &lhs,
					 const SpreadsheetCell &rhs);
  friend const SpreadsheetCell operator/(const SpreadsheetCell &lhs,
					 const SpreadsheetCell &rhs);
  
protected:
  static string doubleToString(double inValue);
  static double stringToDouble(const string &inString);
  
  double mValue;
  string mString;
};


#endif
