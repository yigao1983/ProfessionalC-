#include <iostream>

using namespace std;

typedef enum {
  kMonday, kTuesday, kWednesday, kThursday, kFriday, kSaturday, kSunday
} weekday;

int main()
{
  weekday day = kTuesday;
  
  cout << day << endl;
  
  return 0;
}
