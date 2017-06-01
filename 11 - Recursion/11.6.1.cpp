#include <iostream>
using namespace std;

int RaiseToPower(int baseVal, int exponentVal){
   int resultVal = 0;

   if (exponentVal == 0) {
      resultVal = 1;
   }
   else {
      resultVal = baseVal * RaiseToPower(baseVal,exponentVal-1);/* Your solution goes here  */;
   }

   return resultVal;
}

int main() {
   int userBase = 0;
   int userExponent = 0;

   userBase = 4;
   userExponent = 2;
   cout << userBase << "^" << userExponent << " = "
        << RaiseToPower(userBase, userExponent) << endl;

   return 0;
}
