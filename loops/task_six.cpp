#include<iostream>
#include<string>

using namespace std;

int main(){

    string teaType[4] = {"Chai", "Oolong", "Green", "Orange"};

    for(int i=0 ; i<4 ; i++){
        cout << "Brewing " << teaType[i] << "...\n" ;

        for(int j=1 ; j<=3 ; j++){
            cout << "Brewing " << j << "th cup of " << teaType [i] <<" tea" << endl;
        }
    }

    return 0;
}