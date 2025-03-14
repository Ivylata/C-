#include<iostream>

using namespace std;

int chaiServedTotal ( int chai[], int size){
    int total = 0 ; //initialized with zero to avoid garbagr value
    for(int i = 0; i < size; i ++){
         total += chai[i];
    }
    return total;
}

int main(){

    int chaiServed[3] = {20, 30, 50 };

    int total = chaiServedTotal(chaiServed,3); 

   cout << total; 
    return 0;
}