#include <iostream>

using namespace std;

int* prepareChaiOrder (int cups) // pointer function as it return array and hold pointer of array 
{

    int* order = new int [cups]; // new is the keyword to create dynamic memory

    for (int i = 0 ; i < cups ; i++){
        order[i] =  (i + 1) * 10;
    }

    return order;
}

int main(){

    int cups = 5;
    int* chaiOrder = prepareChaiOrder(cups);
    for(int i=0; i< cups; i++){
        cout <<"Cups " << i+1 << " has " << chaiOrder[i] << " ml \n";
    }
    delete [] chaiOrder;

    return 0;
}