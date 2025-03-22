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

   void serve() override {
    cout << "The " << teaName << "is served " << servings << " cups" << endl;
   }
};


// Second derived class
class MasalaTea : public Tea {

  public :
   MasalaTea(int serve) : Tea("Masala Tea", 4){
    cout << "Masala Tea Constructor is called" << endl;
   }

   void brew () override {
    cout << "The " << teaName << " is brewing" << endl;
   }

   void serve() override {
    cout << "The " << teaName << "is served " << servings << " cups" << endl;
   }
};

int main(){
  GreenTea tea1(8);
  tea1.brew();
  tea1.serve();

  MasalaTea tea2(6);
  tea2.serve();
  tea2.brew();


  return 0;
}

