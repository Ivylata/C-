#include <iostream>
#include <string>

using namespace std;

int main()
{
    string order;
    cout << "What you want to order : ";
    getline(cin, order);

    if (order == "Green Tea")
    {
        cout << "So your order is One Green Tea";
    }
    return 0;
}