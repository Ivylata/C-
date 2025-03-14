#include <iostream>

using namespace std;

int main()
{
    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "How many cups do you want? ";
    cin >> cups;
    cout << "What is the price of Per cups: ";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    //    The fixed amount to give discount is 100 Rupees
    if (totalPrice > 100)
    {
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Your total price after discount is:  " << discountedPrice;
    }
    else
    {
        cout << "Your total price; no discount:  " << totalPrice;
    }

    return 0;
}