#include <iostream>
using namespace std;

int main() {
    const int NUM_VALS = 4;
    int userValues[NUM_VALS];
    int i = 0;
    int matchValue = 0;
    int numMatches = -99; // Assign numMatches with 0 before your for loop
    
    userValues[0] = 2;
    userValues[1] = 2;
    userValues[2] = 1;
    userValues[3] = 2;
    
    matchValue = 2;
    
    /* Your solution goes here  */
    numMatches = 0;
    for(i = 0; i < NUM_VALS; i++)
        if(userValues[i] == matchValue)
            numMatches ++;
    
    cout << "matchValue: " << matchValue << ", numMatches: " << numMatches << endl;
    
    return 0;
}
