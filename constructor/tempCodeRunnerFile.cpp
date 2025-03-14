#include <iostream>
#include <vector>

using namespace std;

class Chai{
    public:
    int chaiNumber;
    vector <string> chaiName;

    void displayDetails(){
        cout << chaiNumber ; 
        for(string name : chaiName){
            cout << name << " ";
            cout << endl;
        }
        
    }
// default constructor
    Chai(){ 
        cout << "Constructor Called ";
    }
    
};


int main(){
   Chai myChai;

    return 0;
}