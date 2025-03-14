#include<iostream>

using  namespace std;

int main(){

    int cupOfTea = 5;

    while(cupOfTea > 0){

        cout << "A cup of Tea for you \n";
        cupOfTea --;
        cout << "Remaining " << cupOfTea << endl;
    }
    return 0;
}