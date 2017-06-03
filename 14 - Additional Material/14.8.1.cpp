#include <iostream>
using namespace std;

/* Your solution goes here  */
void SwapArrayEnds(int sortArray[], int SORT_ARR_SIZE){
   int tmp = sortArray[0];
   sortArray[0] = sortArray[SORT_ARR_SIZE - 1];
   sortArray[SORT_ARR_SIZE - 1] = tmp;

}

int main() {
   const int SORT_ARR_SIZE = 4;
   int sortArray[SORT_ARR_SIZE];
   int i = 0;

   sortArray[0] = 10;
   sortArray[1] = 20;
   sortArray[2] = 30;
   sortArray[3] = 40;

   SwapArrayEnds(sortArray, SORT_ARR_SIZE);

   for (i = 0; i < SORT_ARR_SIZE; ++i) {
      cout <<  sortArray[i] << " ";
   }
   cout << endl;

   return 0;
}
