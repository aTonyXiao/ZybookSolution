#include <iostream>
using namespace std;

int main() {
   int countLimit = 0;
   int printVal = 0;

   // Get user input
   cin >> countLimit;

   printVal = 0;
   do {
      cout << printVal << " ";
      printVal = printVal + 1;
   } while ( /* Your solution goes here  */ printVal <= countLimit );
   cout << endl;

   return 0;
}
