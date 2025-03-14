#include <iostream>

using namespace std;

int main()
{
    int teaBag;
    cout << "Hoe many tea bags do you have ? ";
    cin >> teaBag;

    if (teaBag < 10)
    {
        teaBag += 5;
    }
    cout << "Your total teabag is: " << teaBag;

    return 0;
}
