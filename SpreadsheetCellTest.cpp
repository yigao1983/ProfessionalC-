#include <iostream>
#include "SpreadsheetCell.hpp"
#include "StringSpreadsheetCell.hpp"
#include "DoubleSpreadsheetCell.hpp"

using namespace std;

int main(int argc, char **argv)
{
  SpreadsheetCell *cellArray[3];
  
  cellArray[0] = new StringSpreadsheetCell();
  cellArray[1] = new StringSpreadsheetCell();
  cellArray[2] = new DoubleSpreadsheetCell();
  
  cellArray[0]->set("hello");
  cellArray[1]->set("10");
  cellArray[2]->set("18");
  
  cout << "Array values are [" 
       << cellArray[0]->getString() << ","
       << cellArray[1]->getString() << ","
       << cellArray[2]->getString() << "]" << endl;
  
  delete cellArray[2];
  delete cellArray[1];
  delete cellArray[0];
  
  StringSpreadsheetCell myStr;
  DoubleSpreadsheetCell myDbl;
  
  myStr.set("8.4");
  myDbl.set(8.4);
  
  StringSpreadsheetCell result = myDbl + myStr;
  
  cout << result.getString() << endl;
  
  return 0;
}
