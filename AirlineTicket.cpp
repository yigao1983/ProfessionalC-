// AirlineTicket.cpp

#include <iostream>
#include "AirlineTicket.hpp"

using namespace std;

AirlineTicket::AirlineTicket()
{
  // Initialize data members
  fHasEliteSuperRewardsStatus = false;
  mPassengerName = "Unknown Passenger";
  mNumberOfMiles = 0;
}

AirlineTicket::~AirlineTicket()
{
  // Nothing much to do
}

int AirlineTicket::calculatePriceInDollars()
{
  if (getHasEliteSuperRewardsStatus()) {
    return 0;
  }
  
  return static_cast<int>(getNumberOfMiles()*0.1);
}

string AirlineTicket::getPassengerName()
{
  return mPassengerName;
}

void AirlineTicket::setPassengerName(string inName)
{
  mPassengerName = inName;
}

int AirlineTicket::getNumberOfMiles()
{
  return mNumberOfMiles;
}

void AirlineTicket::setNumberOfMiles(int inMiles)
{
  mNumberOfMiles = inMiles;
}

bool AirlineTicket::getHasEliteSuperRewardsStatus()
{
  return fHasEliteSuperRewardsStatus;
}

void AirlineTicket::setHasEliteSuperRewardsStatus(bool inStatus)
{
  fHasEliteSuperRewardsStatus = inStatus;
}
