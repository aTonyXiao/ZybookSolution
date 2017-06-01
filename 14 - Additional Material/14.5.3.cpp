#include <iostream>
using namespace std;

int main() {
    const int SCORES_SIZE = 4;
    int bonusScores[SCORES_SIZE];
    int i = 0;
    
    bonusScores[0] = 10;
    bonusScores[1] = 20;
    bonusScores[2] = 30;
    bonusScores[3] = 40;
    
    /* Your solution goes here  */
    
    for (i = 0; i < SCORES_SIZE - 1; i++) {
        bonusScores[i] = bonusScores[i] + bonusScores[i+1];
    }
    
    for (i = 0; i < SCORES_SIZE; ++i) {
        cout << bonusScores[i] << " ";
    }
    cout << endl;
    
    return 0;
}
