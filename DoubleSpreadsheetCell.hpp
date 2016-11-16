#ifndef DOUBLESPREADSHEETCELL
#define DOUBLESPREADSHEETCELL

#include <string>

using namespace std;

class DoubleSpreadsheetCell : public SpreadsheetCell
{
public:
  
  DoubleSpreadsheetCell();
  virtual void set(double inDouble);
  virtual void set(const string &inString);
  virtual string getString() const;
  
protected:
  static string doubleToString(double inValue);
  static double stringToDouble(const string &inValue);
  double mValue;
};

#endif
