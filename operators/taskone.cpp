#include <iostream>

using namespace std;

int main()
{
    int teaBags;
    double price, totalPrice;

    cout << "Enter number of tea bags: ";
    cin >> teaBags;

    cout << "Enter the price per tea bags: ";
    cin >> price;

    totalPrice = teaBags * price;

    totalPrice += (totalPrice * 0.10);

    cout << "Your total bill is with tax : " << totalPrice;
    return 0;
}