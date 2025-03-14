#include <iostream>

using namespace std;

int main()
{
    int choise;
    cout << "Menu: 1.Green Tea \n 2.Lemon Tea \n 3.Darjeeling Tea \n 4.Oolong Tea \n";
    cout << "Enter Your Choise: ";
    cin >> choise;

    switch (choise)
    {
    case 1:
        cout << "Your order is Green Tea";
        break;
    case 2:
        cout << "Your order is Lemon Tea";
        break;
    case 3:
        cout << "Your order is Darjeeling Tea";
        break;
    case 4:
        cout << "Your order is Oolong Tea";
        break;

    default:
        cout << "Invalid Choise";
        break;
    }

    return 0;
}