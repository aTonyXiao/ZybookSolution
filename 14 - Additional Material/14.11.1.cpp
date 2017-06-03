#include <iostream>
using namespace std;

/* Your solution goes here  */
struct PatientData{
   int heightInches;
   int weightPounds;
};

int main() {
   PatientData lunaLovegood;

   lunaLovegood.heightInches = 63;
   lunaLovegood.weightPounds = 115;

   cout << "Patient data: "
        << lunaLovegood.heightInches << " in, "
        << lunaLovegood.weightPounds << " lbs" << endl;

   return 0;
}
