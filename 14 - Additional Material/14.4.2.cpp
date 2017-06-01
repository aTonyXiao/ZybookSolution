#include <iostream>
using namespace std;

int main() {
    const int SIZE_LIST = 4;
    int keysList[SIZE_LIST];
    int itemsList[SIZE_LIST];
    int i = 0;
    
    keysList[0] = 42;
    keysList[1] = 105;
    keysList[2] = 101;
    keysList[3] = 100;
    
    itemsList[0] = 10;
    itemsList[1] = 20;
    itemsList[2] = 30;
    itemsList[3] = 40;
    
    /* Your solution goes here  */
    for(; i < SIZE_LIST; i++)
        if(keysList[i] > 100)
            cout << itemsList[i] << " ";
    
    cout << endl;
    
    return 0;
}
