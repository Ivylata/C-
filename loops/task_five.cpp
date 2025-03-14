#include<iostream>
#include<string>

using namespace std;

int main(){

    string response;

    while(true){
        cout << "Do you want more Tea? (if not write Stop) : " << endl;
getline(cin,response);
        if( response == "Stop" || response == "stop"){
            break;
        }
    }
    return 0 ;
}