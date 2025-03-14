#include<iostream>
#include<string>

using namespace std;
// function declaration and defination
int chaiNumber(int chai){
    cout << "Your chai number is : " << chai ;
}
//function overloading means same but different number of parameter//
 void serveChai(){
    cout << "Serve Chai to you \n";
 }

 void serveChai(int chai){
    cout << "Serve Chai to you: \n" << chai;
 }
int main(){
    serveChai(4);
    serveChai();
int teaTea = chaiNumber (4);
    return 0;
}