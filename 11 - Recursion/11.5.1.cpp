#include <iostream>
using namespace std;

// Returns number of pennies if pennies are doubled numDays times
long long DoublePennies(long long numPennies, int numDays){
   long long totalPennies = 0;

   /* Your solution goes here  */
   if(numDays == 0)
      return numPennies;

   else {
      totalPennies = DoublePennies((numPennies * 2), numDays - 1);
   }

   return totalPennies;
}

// Program computes pennies if you have 1 penny today,
// 2 pennies after one day, 4 after two days, and so on
int main() {
   long long startingPennies = 0;
   int userDays = 0;

   startingPennies = 1;
   userDays = 10;
   cout << "Number of pennies after " << userDays << " days: "
        << DoublePennies(startingPennies, userDays) << endl;
   return 0;
}
