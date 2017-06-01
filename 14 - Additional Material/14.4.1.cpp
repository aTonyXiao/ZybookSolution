#include <iostream>
using namespace std;

int main() {
    const int NUM_VALS = 4;
    int origList[NUM_VALS];
    int offsetAmount[NUM_VALS];
    int i = 0;
    
    origList[0] = 40;
    origList[1] = 50;
    origList[2] = 60;
    origList[3] = 70;
    
    offsetAmount[0] = 5;
    offsetAmount[1] = 7;
    offsetAmount[2] = 3;
    offsetAmount[3] = 0;
    
    /* Your solution goes here  */
    for(;i < NUM_VALS; i++)
        cout << origList[i] + offsetAmount[i] << " ";
    
    cout << endl;
    
    return 0;
}
