#include <iostream>

using namespace std;

int main()
{
    int teaBags;
    cout << "Enter how many tea Bags do you have: ";
    cin >> teaBags;

    if (teaBags < 20)
    {
        teaBags += 5;
    }
    cout << "The total number of tea bag is : " << teaBags << endl;
    return 0;
}