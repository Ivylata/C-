#include <iostream>
#include<string>

using namespace std;

int main(){

    string response;

    do{
        cout <<"Do you want more Tea? (Yes/No)";
        getline(cin,response);

    }
    while( response != "no");
   

    return 0;
}