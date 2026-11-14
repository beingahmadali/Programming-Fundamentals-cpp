#include <iostream>

using namespace std;

int main()
{

    int initialStock = 5;
    int itemsSold = 8;

    // unsigned int
    unsigned int unsignedStock = initialStock;
    unsignedStock = unsignedStock - itemsSold;

    //  signed int
    int signedStock = initialStock;
    signedStock = signedStock - itemsSold;

    cout << "========================================================\n";
    cout << "\tWAREHOUSE STOCK COUNTER (BUG HUNT)\n";
    cout << "========================================================\n";
    cout << "Starting Stock:\t" << initialStock << " units\n";
    cout << "Items Sold:\t" << itemsSold << " units\n";
    cout << "--------------------------------------------------------\n";
    cout << "Data Type\t|\tCalculated Stock\t|\tStatus\n";
    cout << "--------------------------------------------------------\n";
    cout << "unsigned int\t|\t" << unsignedStock << "\t\t|\tBUG\n";
    cout << "signed int\t|\t" << signedStock << "\t\t\t|\tFIXED\n";
    cout << "========================================================\n";

    return 0;
}