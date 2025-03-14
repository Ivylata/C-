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
 // Parameter constructor
    Chai(int number, vector <string> chaa){
        chaiNumber = number;
        chaiName = chaa;
        cout << "Constructor Called ";
    }
    
};


int main(){
   Chai myChai(4,{"Lemon Tea"}); // arguments are sent directly with constructor method

   myChai.displayDetails();
  

    return 0;
}