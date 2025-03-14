#include<iostream>
#include<string>

using namespace std;

// function declaration & defination together

string chaiType(string type = "Masala Chai") // default parameter
{
    cout << "Your Chai type is :" << type << endl;
}

// function declaration
void DarjeelingTea();


void makeChai(){
    int chai = 4; //formal parameter
    cout << "Your want " << chai << " cups" << endl;
}
int chaiNumber(int tea){
    cout<< "Your chai number is : " << tea << endl;
}

// function defination

void DarjeelingTea(){
    cout<< "The best Tea of West Bengal";
}

int main(){

    string chaiName = chaiType();
    makeChai(); // calling function
    int number = chaiNumber(4); // actual parameter
    DarjeelingTea();
    return 0;
}
