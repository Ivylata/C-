#include <iostream>

using namespace std;

int main()
{

    int cups;
    cout << "How many cups do you have: ";
    cin >> cups;

    if (cups > 20)
    {
        cout << "Your get a GOLD badge ";
    }
    else if (cups >= 10 && cups <= 20)
    {
        cout << "You get a SILVER badge";
    }
    else
    {
        cout << "You get no badge";
    }

    return 0;
}