#include <iostream>
using namespace std;

struct InventoryTag {
   int itemID;
   int quantityRemaining;
};

int main() {
   InventoryTag redSweater;

   /* Your solution goes here  */
   cout << "Inventory ID: "<< redSweater.itemID << ", Qty: " << redSweater.quantityRemaining << endl;

   return 0;
}
