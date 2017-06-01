#include <iostream>
using namespace std;

int main() {
    const int NUM_POINTS = 4;
    int dataPoints[NUM_POINTS];
    int minVal = 0;
    int i = 0;
    
    dataPoints[0] = 2;
    dataPoints[1] = 12;
    dataPoints[2] = 9;
    dataPoints[3] = 20;
    
    minVal = 10;
    
    /* Your solution goes here  */
    for (i = 0; i < NUM_POINTS; i++)
        if(dataPoints[i] < minVal)
            dataPoints[i] *= 2;
    
    for (i = 0; i < NUM_POINTS; ++i) {
        cout << dataPoints[i] << " " ;
    }
    cout << endl;
    
    return 0;
}
