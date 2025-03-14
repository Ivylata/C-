#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Chai
{
public:
 // data members aka attributes
string teaType;
int servings;
vector <string> indrediends;

  // member functions

  void display(){
    cout << "Your tea type is: " << teaType << endl;
    cout << "Your servings: " << servings <<endl;
    cout << "Ingredients are: ";

    for(string ingredientName : indrediends){
        cout  <<ingredientName ;
    }
   
  }
   
};

int main(){

    Chai chai; // class name starts with capital object name small

    chai.teaType = "Masala Chai";
    chai.servings = 4 ;
    chai.indrediends = {"Water ", "ginger ", "Tea ", "Masala"};

    chai.display();

    Chai chaione;
    chaione.teaType = "Lemon Tea";
    chaione.servings = 6;
    chai.indrediends = {"water ", "lemon ", "Tea "};
    chai.display();

    return 0;

}
