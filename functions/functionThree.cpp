#include<iostream>
#include<string>

using namespace std;
 
//example of Pass by Value

void ServeChai(int chai){
    chai = chai + 6;
    cout << "Number of Chai is : " << chai << endl;
 }

 int main(){

int myChai = 4;

ServeChai(myChai);
cout << "Total number of Chai :" << myChai;

    return 0;
 }