#ifndef STRINGSPREADSHEETCELL
#define STRINGSPREADSHEETCELL

#include <string>

using namespace std;

class StringSpreadsheetCell : public SpreadsheetCell
{
public:
  StringSpreadsheetCell();
  
  virtual void set(const string inString);
  
  virtual string getString() const;
  
protected:
  string mValue;
};

#endif
