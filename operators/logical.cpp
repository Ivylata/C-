#include <iostream>

using namespace std;

int main()
{
    bool isStudent;
    cout << "Are you a student (Enter 1 if yes or 0): ";
    cin >> isStudent;

    int cups;
    cout << "How many cups do you have: ";
    cin >> cups;

    if (isStudent || cups >= 15)
    {
        cout << "Yay! You got a discount" << endl;
    }
    else
    {
        cout << "No discount" << endl;
    }

    return 0;
}