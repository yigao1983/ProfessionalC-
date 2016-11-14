#include <iostream>
#include "SpreadsheetCell.hpp"

using namespace std;

int main()
{
  SpreadsheetCell myCell(5), anotherCell(4);
  SpreadsheetCell aThirdCell("test");
  
  cout << "cell 1: " << myCell.getString() << endl;
  cout << "cell 2: " << anotherCell.getString() << endl;
  cout << "cell 3: " << aThirdCell.getString() << endl;
  
  SpreadsheetCell cells[3];// = {SpreadsheetCell(0), SpreadsheetCell(1), SpreadsheetCell(3)};
  
  for (int i = 0; i < 3; i++) {
    cout << cells[i].getValue() << endl;
  }
  
  return 0;
}
