// structtest.cpp

#include <iostream>
#include "employeestruct.hpp"

using namespace std;

int main(int argc, char **argv)
{
  // Create and populate an employee
  EmployeeT anEmployee = {.firstInitial='M', .middleInitial='R', .lastInitial='G',
			  .employeeNumber=42, .salary=80000};
  /*
  anEmployee.firstInitial = 'M';
  anEmployee.middleInitial = 'R';
  anEmployee.lastInitial = 'G';
  anEmployee.employeeNumber = 42;
  anEmployee.salary = 80000;
  */
  cout << "Employee: " << anEmployee.firstInitial
       << anEmployee.middleInitial
       << anEmployee.lastInitial << endl;
  
  cout << "Number: " << anEmployee.employeeNumber << endl;
  cout << "Salary: " << anEmployee.salary << endl;
  
  return 0;
}
