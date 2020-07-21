#include <iostream>
using namespace std;

// Fixed coin values
const int COINS_PER_DOLLAR = 100;
const int VALUE_OF_PENNY = 1, VALUE_OF_NICKEL = 5,
VALUE_OF_DIME = 10, VALUE_OF_QUARTER = 25;
// number of specific coins per dollar
const int PENNIES_PER_DOLLAR = 100, NICKELS_PER_DOLLAR = 20,
 DIMES_PER_DOLLAR = 10, QUARTERS_PER_DOLLAR = 4;

int main()
{
  // Number of each coin inputed by the user
  int numberOfPennies, numberOfNickels, 
  numberOfDimes, numberOfQuarters;

  // total dollars, cents, cents carry over
  int totalDollars, totalCents, totalCentsCarryOver, totalCentsToDollars;
  
  //cents to dollars  cents carry over  carry over value
  int q_to_d, carriedOverQuarters, quarterCarryOverValue;
  int d_to_d, carriedOverDimes, dimeCarryOverValue;
  int n_to_d, carriedOverNickels, nickelCarryOverValue;
  int p_to_d, carriedOverPennies, pennyCarryOverValue;

  cout << "# of quarters: ";
  cin >> numberOfQuarters;
  cout << "# of dimes: ";
  cin >> numberOfDimes;
  cout << "# of nickels: ";
  cin >> numberOfNickels;
  cout << "# of pennies: ";
  cin >> numberOfPennies;

  // Quarters
  q_to_d = numberOfQuarters / QUARTERS_PER_DOLLAR;
  carriedOverQuarters = numberOfQuarters % QUARTERS_PER_DOLLAR;
  quarterCarryOverValue = VALUE_OF_QUARTER * carriedOverQuarters;

  // Dimes
  d_to_d = numberOfDimes / DIMES_PER_DOLLAR;
  carriedOverDimes = numberOfDimes % DIMES_PER_DOLLAR;
  dimeCarryOverValue = VALUE_OF_DIME * carriedOverDimes;

  // Nickels
  n_to_d = numberOfNickels / NICKELS_PER_DOLLAR;
  carriedOverNickels = numberOfNickels % NICKELS_PER_DOLLAR;
  nickelCarryOverValue = VALUE_OF_NICKEL * carriedOverNickels;

  // Pennies
  p_to_d = numberOfPennies / PENNIES_PER_DOLLAR;
  carriedOverPennies = numberOfPennies % PENNIES_PER_DOLLAR;
  pennyCarryOverValue = VALUE_OF_PENNY * carriedOverPennies;

  //Total Cents
  totalCents = pennyCarryOverValue + dimeCarryOverValue + nickelCarryOverValue + quarterCarryOverValue + totalCentsCarryOver;

  //Total cents carry over
  totalCentsToDollars = totalCents / COINS_PER_DOLLAR;
  totalCentsCarryOver = totalCents % COINS_PER_DOLLAR;

  //Total Dollars
  totalDollars = q_to_d + d_to_d + n_to_d + p_to_d + totalCentsToDollars;

  cout << "The total is " << totalDollars << " and " << totalCentsCarryOver << " cents."<< endl;

  return 0;
}