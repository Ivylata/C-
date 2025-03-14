#include <iostream>
#include <vector>

using namespace std;

class Chai{
    public:
    int servings;
    string* teaName;
    vector <string> ingrediends;

    
 //parameterized constructor

 Chai(int serve, string chaName, vector <string> ingri){
    servings = serve;
    teaName = new string(chaName);
    ingrediends = ingri;
    cout << "Parameterized Constructor Called " << endl;
}


//copy constructor

Chai(Chai& tea){
    servings = tea.servings ;
    teaName = new string(*tea.teaName);
    ingrediends = tea.ingrediends;
    cout << "Copy Constructor is called";

}


    void displayDetails(){
        cout << servings ;
        cout << *teaName;
        for(string name : ingrediends){
            cout << " " <<name;
        
        }
        
    }


    //destructor

    ~Chai(){
        delete teaName;
        cout << "Destructor is Called" << endl;
    }
   
    
};


int main(){
  
    Chai newChai (4, " Lemon Tea", {" Water", " Lemon", " Tea leaves", " Honey"});
    newChai.displayDetails();

   Chai chaiOne = newChai;
   chaiOne.displayDetails();

    return 0;
}