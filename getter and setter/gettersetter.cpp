#include<iostream>
#include<vector>

using namespace std;

class Chai{
    private:
    string teaName;
    int servings;
    vector <string> ingredients;

    public:
     Chai(string name, int serve, vector <string> ingre ){
        teaName = name;
        servings = serve;
        ingredients = ingre;
     }

     //getter to get teaName which is private
     string getTeaName(){
        return teaName;
     }
     // setter fot teaName
     void setTeaName(string ChaName){
        teaName = ChaName;
     }

     // getter to set ingredients
     vector <string> getIngredients(){
        return ingredients;
     }

     //setter for ingredients
     void setIngredients(vector <string> ingre){
        ingredients = ingre ;
     }



     void display(){
        cout << "Name of Chai" << teaName << endl;
        cout << "Servings" << servings << endl;
        for(string upakaron : ingredients){
            cout << " " << upakaron ;
        }
     }
};

int main(){
    Chai chai1("Masala Chai", 2, {"Water", "leaves"});

    chai1.setTeaName("Ginger Tea"); // will set name masala to ginger
    chai1.getTeaName();

    chai1.setIngredients({"Jal", "Patta"});
    chai1.getIngredients();

    chai1.display();

    return 0;
}