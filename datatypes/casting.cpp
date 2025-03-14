#include <iostream>

using namespace std;

int main()
{
    float chaiPrice = 57.66;
    int roundedChaiPrice = (int)chaiPrice;
    int roundedChaiPrice1 = (float)chaiPrice; // it might not show any error but both casting type and variable that is storing should be same

    cout << roundedChaiPrice1 << endl;

    return 0;
}