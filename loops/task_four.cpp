#include<iostream>
#include<string>

using namespace std;
int main(){

    string teaType[4] = {"Oolong Tea", "Orange Tea", "Black Tea","Green Tea"};
    
    for(int i = 0; i < 4 ; i++)
    {
   
        if(teaType[i] == "Green Tea"){
            cout << "Skipping " << teaType[i] << endl;
            continue;
        }
        cout << "here is your " << teaType[i] << endl;
    }
    return 0;
    }

