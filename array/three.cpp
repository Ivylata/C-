#include <iostream>

using namespace std;

int main (){
    int chaiSells [3] [4] = {
        {30, 40, 50, 60},
        {20, 80, 40, 60},
        {55, 45, 65, 95}
    };

    for(int i = 0; i < 3; i ++) // for row operation
    {
       cout << "Now we are at Shop : " << i+1 << endl;
       for(int j = 0 ; j < 4; j ++){

        cout << " The Sell is : " << chaiSells [i][j];
        cout << endl;
       }
}

    return 0;
}
