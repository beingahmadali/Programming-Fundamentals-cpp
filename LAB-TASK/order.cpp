#include <iostream>
#include <string>
using namespace std;

int main()
{
    int item, qty, orderType;
    string itemName;
    int price = 0;

    cout << "1. Zinger Burger Rs. 450 | 2. Club Sandwich Rs. 350 | 3. Fries Rs. 200 | 4. Cold Drink Rs. 120 | 5. Tea Rs. 80" << endl;

    cout << "Enter item number (1-5): ";
    cin >> item;

    switch (item)
    {
    case 1:
        itemName = "Zinger Burger";
        price = 450;
        break;
    case 2:
        itemName = "Club Sandwich";
        price = 350;
        break;
    case 3:
        itemName = "Fries";
        price = 200;
        break;
    case 4:
        itemName = "Cold Drink";
        price = 120;
        break;
    case 5:
        itemName = "Tea";
        price = 80;
        break;
    default:
        cout << "Invalid item number!" << endl;
        return 0;
    }

    cout << "Enter quantity (1-20): ";
    cin >> qty;

    if (qty < 1 || qty > 20)
    {
        cout << "Invalid quantity! Must be between 1 and 20." << endl;
        return 0;
    }

    cout << "Order type (1 Dine-in, 2 Takeaway, 3 Delivery): ";
    cin >> orderType;

    int delivery = 0;
    switch (orderType)
    {
    case 1:
    case 2:
        delivery = 0;
        break;
    case 3:
        delivery = 150;
        break;
    default:
        cout << "Invalid order type!" << endl;
        return 0;
    }

    int subtotal = price * qty;
    double discount = (subtotal > 1000) ? (subtotal * 0.10) : 0;
    double total = subtotal - discount + delivery;

    cout << "------------------------------" << endl;
    cout << itemName << " x " << qty << " = Rs. " << subtotal << endl;
    cout << "Discount (10%) = Rs. " << discount << endl;
    cout << "Delivery charges = Rs. " << delivery << endl;
    cout << "Total payable = Rs. " << total << endl;

    return 0;
}