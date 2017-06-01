#include <iostream>
using namespace std;

void PrintFactorial(int factCounter, int factValue){
   int nextCounter = 0;
   int nextValue = 0;

   if (factCounter == 0) {            // Base case: 0! = 1
      cout << "1" << endl;
   }
   else if (factCounter == 1) {       // Base case: Print 1 and result
      cout << factCounter << " = " << factValue << endl;
   }
   else {                             // Recursive case
      cout << factCounter << " * ";
      nextCounter = factCounter - 1;
      nextValue = nextCounter * factValue;

      /* Your solution goes here  */
      PrintFactorial(nextCounter, nextValue);

   }
}

int main() {
   int userVal = 0;

   userVal = 5;
   cout << userVal << "! = ";
   PrintFactorial(userVal, userVal);

   return 0;
}
