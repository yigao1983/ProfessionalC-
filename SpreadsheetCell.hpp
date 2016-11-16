// SpreadsheetCell.hpp
#ifndef SPREADSHEETCELL
#define SPREADSHEETCELL

#include <string>

using namespace std;

class SpreadsheetCell
{
public:
  SpreadsheetCell() {}
  
  virtual ~SpreadsheetCell() {}
  
  virtual void set(const string &inString) = 0;
  
  virtual string getString() const = 0;
};

#endif
