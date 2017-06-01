#include <iostream>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   int courseGrades[NUM_VALS];
   int i = 0;

   courseGrades[0] = 7;
   courseGrades[1] = 9;
   courseGrades[2] = 11;
   courseGrades[3] = 10;

   /* Your solution goes here  */
   for(i = 0; i<= NUM_VALS -1; i++)
      cout << courseGrades[i] << " ";
   cout << endl;
   for(i = NUM_VALS-1; i >= 0; i-- )
      cout << courseGrades[i] << " ";
   cout << endl;

   return 0;
}
