#include <iostream>
using namespace std;

int main() {
    const int NUM_GUESSES = 3;
    int userGuesses[NUM_GUESSES];
    int i = 0;
    
    /* Your solution goes here  */
    for(i = 0; i < NUM_GUESSES; i++)
        cin >> userGuesses[i];
    
    for (i = 0; i < NUM_GUESSES; ++i) {
        cout << userGuesses[i] << " ";
    }
    
    return 0;
}
