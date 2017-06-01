#include <iostream>
using namespace std;

int main() {
    const int SCORES_SIZE = 4;
    int lowerScores[SCORES_SIZE];
    int i = 0;
    
    lowerScores[0] = 5;
    lowerScores[1] = 0;
    lowerScores[2] = 2;
    lowerScores[3] = -3;
    
    /* Your solution goes here  */
    for (i = 0; i < SCORES_SIZE; ++i) {
        if(lowerScores[i] <= 0)
            lowerScores[i] = 0;
        else
            lowerScores[i] --;
    }
    
    for (i = 0; i < SCORES_SIZE; ++i) {
        cout << lowerScores[i] << " ";
    }
    cout << endl;
    
    return 0;
}
