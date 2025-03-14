#include <iostream>

using namespace std;

int main()
{
    int noOfCups;
    double pricePerCup = 5.00, totalPrice, discount;
    cout << "How many cups do you want: ";
    cin >> noOfCups;

    totalPrice = pricePerCup * noOfCups;

    if (noOfCups > 20)
    {
        discount = 0.20;
    }
    else if (noOfCups >= 10 && noOfCups <= 20)
    {
        discount = 0.10;
    }
    else
    {
        discount = 0;
    }

    totalPrice -= (totalPrice * discount);
    cout << "Your total bill is : " << totalPrice << endl;
    return 0;
}