#include<iostream>
#include<string>

using namespace std;

class Tea {

  protected:
    string teaName;
    int servings;

  public:
    Tea(string name, int serve) : teaName(name), servings(serve) {
      cout << "The Tea Constructor is called" << endl;
    }  

    virtual void brew() {
      cout << teaName <<" is brewing" << endl;
    }

    virtual void serve() {
      cout << servings << "cups of " << teaName << " is served" << endl;
    }
};

// derived class is called

class GreenTea : public Tea {

  public :
   GreenTea(int serve) : Tea("Green Tea", 4){
    cout << "Green Tea Constructor is called" << endl;
   }

   void brew () override {
    cout << "The " << teaName << " is brewing" << endl;
   }

   void serve() override{
    cout << "The " << teaName << "is served " << servings << " cups" << endl;
   }
};

// second derived class
class MasalaTea : public Tea {

    public :
     MasalaTea(int serve) : Tea("Masala Tea", 4){
      cout << "Masala Tea Constructor is called" << endl;
     }
  
     void brew () override final {
      cout << "The " << teaName << " is brewing" << endl;
     }
  
     void serve() override final{
      cout << "The " << teaName << "is served " << servings << " cups" << endl;
     }
  };

   //Masala tea is further inheritted

    /*  class SpicyMasalaTea : public MasalaTea {

    public :
     SpicyMasalaTea() : MasalaTea(6){
      cout << "Spicy Masala Tea Constructor is called" << endl;
     }
  
     void brew () override {
      cout << "The " << teaName << " is brewing" << endl;
    }
  
    void serve() override {
     cout << "The " << teaName << "is served " << servings << " cups" << endl;
     }
      };

  this whole function would not be allowed as methods in MasalaTea is final and it is inherit from MasalaTea
  */


int main(){
    Tea* tea1 = new GreenTea(6);

    tea1 -> brew();
    tea1 -> serve();

    Tea* tea2 = new MasalaTea(6);

    tea2 -> brew();
    tea2 -> serve();

    //SpicyMasalaTea tea3;

    //ea3.brew();

    delete tea1;
    delete tea2;
    return 0;
}