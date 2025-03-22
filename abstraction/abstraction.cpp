#include<iostream>

using namespace std;

class Tea{
    public:
     virtual void prepareTea() = 0 ; // pure virtual function
     virtual void brew () = 0;
     virtual void serve () = 0 ;

     void makeTea(){
        prepareTea();
        brew();
        serve();
     }
};

// derived class to override the virtual functions

class GreenTea : public Tea {
    public : 
     void prepareTea () override {
        cout << "Tea leaves and water is being ready" << endl;

     }
     void brew () override {
        cout << "Green Tea is brewing.." << endl;
     }

     void serve () override {
        cout << "Green tea is served" << endl;
     }

};

// another derived class
class MasalaTea : public Tea {
    public : 
     void prepareTea () override {
        cout << "Tea leaves with masala and water is being ready" << endl;

     }
     void brew () override {
        cout << "Masala Tea is brewing.." << endl;
     }

     void serve () override {
        cout << "Masala tea is served" << endl;
     }

};

int main() {
     GreenTea Chai;
     Chai.makeTea();
     MasalaTea Chai1;
     Chai1.makeTea();

     return 0;
}