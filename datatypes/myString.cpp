#include <iostream>
#include <string>

using namespace std;

int main()
{
    string userChai;
    int Chaicups;

    cout << "What you like to order\n";
    getline(cin, userChai); // one way to take input as for string

    cout << "How many cups of " << userChai << " would you like? \n";
    cin >> Chaicups; // second way to take input

    cout << "Order is " << Chaicups << " of " << userChai;
    return 0;
}