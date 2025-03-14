#include <iostream>
#include<vector>

using namespace std;

class Animal{

    public:
    string name;
    int count;
    vector <string> description;

    Animal(){

        name = "Tiger";
        count = 5;
        description = {"Four legs"};
        cout << "Constructor Called";
    }

    void displayDetails(){
        cout << name << endl;
        cout << count << endl;
        for(string des : description){
            cout << des << " ";
        }
    }

};


int main(){
   Animal newAnimal; 

   // as default value is set in constructor the values are shown as displayDetails is called
   newAnimal.displayDetails();
    return 0;
}