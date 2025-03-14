#include <iostream>

using namespace std;
int main()
{
    int chaiPatti = 50;
    float chaiPrice = 75.66;          // // take precision upto 7-8 places
    double chaiQuantity = 49.9999999; // take precision upto 15-16 places
    char chaiGrade = 'A';             // char: only take single char to dispaly; if 'AB' taken o/t: B only
    bool isChaiReady = false;         // false value ~ 0 , true value ~ 1
    // bool isChai = ''; bool doesn't support empty quote
    cout << isChaiReady << endl;

    return 0;
}