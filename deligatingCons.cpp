#include<iostream>
#include<vector>

using namespace std;
class Chai {
    public:
    string teaName;
    int servings;
    vector <string> ingredients;

    // deligating constructor
    Chai(string ChaiName) : Chai(ChaiName, 2 , {"Water", "Leaves"}) {}

  //main constructor
    Chai(string name, int serve,  vector <string> ingre){

        teaName = name;
        servings =  serve;
        ingredients = ingre;

    }

    
   

    void displayDetails(){
        cout << "Tea Name is : " << teaName << endl;
        cout << "Total servings : " << servings << endl;
        for(string nameIngredients : ingredients){
        cout << "Ingredients: " << nameIngredients << endl;
    }

    }

};



int main(){

    Chai quickTea ("QuickTea");

    quickTea.displayDetails();
    return 0;
}