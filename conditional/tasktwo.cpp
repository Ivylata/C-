#include <iostream>

using namespace std;

int main()
{
    int openTime;
    cout << "Enter when you want to visit the shop(enter time in 24 hour format): ";
    cin >> openTime;

    if (openTime >= 8 && openTime <= 18)
    {
        cout << "Yay! Shop is open";
    }
    else
    {
        cout << "Oops! shop is closed";
    }
    return 0;
}