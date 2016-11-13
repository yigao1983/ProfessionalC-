#include <iostream>
#include <stdexcept>

using namespace std;

double divide_numbers(double inNumerator, double inDenominator)
{
  if (inDenominator == 0) {
    throw exception();
  }
  
  return inNumerator/inDenominator;
}

int main()
{
  try {
    cout << divide_numbers(2.5, 0.5) << endl;
    cout << divide_numbers(2.3, 0.0) << endl;
  } catch (exception e) {
    cout << "An exception was caught." << endl;
  }
  
  return 0;
}
