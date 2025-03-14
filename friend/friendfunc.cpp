#include<iostream>
#include<string>

using namespace std;

class Chai {

    private :
     string teaName;
     int servings;

    public : 
     Chai(string Name, int serve) : teaName(Name), servings(serve){} // parameterized constructor 

     friend bool compareServings(const Chai &chai1, const Chai &chai2); // friend function

     void display() const {
        cout << "Tea Name : " << teaName << endl;
     }

};
// here we are defining friend function
bool compareServings(const Chai &chai1 , const Chai &chai2){
    return chai1.servings >> chai2.servings; 
}

int main(){
    Chai MasalaChai("Masala Chai", 4);

    Chai GingerTea("GingerTea",6);

    GingerTea.display();
    MasalaChai.display();

    if(compareServings(MasalaChai,GingerTea)){
cout << "More";
    } else {
cout << "Less";
    }
    return 0;
}