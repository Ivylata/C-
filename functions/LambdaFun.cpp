#include<iostream>
#include<string>

using namespace std;
 



 int main(){

 auto toStoreLambda = [](int chai){
    cout << "Your chai number is : " << chai << endl;
 };

 toStoreLambda(6);
    return 0;
 }