#include <iostream>
#include <string>

using namespace std;

int main()
{
    int ChaiPrice;
    cout << "Enter a base price of Chai: ";
    cin >> ChaiPrice;

    float increasedChaiPrice = (float)ChaiPrice * 0.10;
    cout << "The increased price is : " << increasedChaiPrice + ChaiPrice;
    return 0;
}