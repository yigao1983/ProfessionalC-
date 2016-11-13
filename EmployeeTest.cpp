// EmployeeTest.cpp

#include <iostream>
#include "Employee.hpp"

using namespace std;
using namespace Records;

int main(int argc, char **argv)
{
  cout << "Testing the Employee class." << endl;
  
  Employee emp;
  
  emp.setFirstName("Marni");
  emp.setLastName("Klepper");
  emp.setEmployeeNumber(71);
  emp.setSalary(50000);
  emp.promote();
  emp.promote(50);
  emp.hire();
  emp.display();
  
  return 0;
}
