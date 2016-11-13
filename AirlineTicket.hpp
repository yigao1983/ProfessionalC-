// AirlineTicket.hpp
#ifndef AIRLINETICKET
#define AIRLINETICKET

#include <string>

class AirlineTicket
{
public:
  AirlineTicket();
  ~AirlineTicket();
  
  int calculatePriceInDollars();
  
  std::string getPassengerName();
  void        setPassengerName(std::string inName);
  int         getNumberOfMiles();
  void        setNumberOfMiles(int inMiles);
  bool        getHasEliteSuperRewardsStatus();
  void        setHasEliteSuperRewardsStatus(bool inStatus);
  
private:
  std::string mPassengerName;
  int         mNumberOfMiles;
  bool        fHasEliteSuperRewardsStatus;
};

#endif
