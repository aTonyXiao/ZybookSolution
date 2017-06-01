#include <iostream>
using namespace std;

int main() {
    const int NUM_VALS = 4;
    int hourlyTemp[NUM_VALS];
    int i = 0;
    
    hourlyTemp[0] = 90;
    hourlyTemp[1] = 92;
    hourlyTemp[2] = 94;
    hourlyTemp[3] = 95;
    
    /* Your solution goes here  */
    cout << hourlyTemp[0];
    for(i = 1; i < NUM_VALS; i++)
        cout <<", "<< hourlyTemp[i];
    
    cout << endl;
    
    return 0;
}
