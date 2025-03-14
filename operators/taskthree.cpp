#include <iostream>

using namespace std;

int main()
{

    int cups;
    cout << "How many cups do you want: ";
    cin >> cups;

    bool oneYearMember;
    cout << "Have you been a member (if yes press:1 else just: 0): ";
    cin >> oneYearMember;

    if (cups >= 12 || oneYearMember)
    {
        cout << "Congrats You've won a Discount coupon";
    }
    else
    {
        cout << "Sorry No offers avalable";
    }
    return 0;
}