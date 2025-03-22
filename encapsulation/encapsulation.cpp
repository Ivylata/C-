#include<iostream>
#include<string>

using namespace std;

class bankDetails{

    private:
    string accNumber;
    double balance;

    public:
     bankDetails(string accNum, double initialBalance){
        accNumber = accNum;
        balance = initialBalance;
     }

     // function to check balance
     // getter to get balance
     double getBalance() const{
        return balance;
     }

     // function to deposit money

     void depositMoney(double amount){

        if(amount > 0){
            balance += amount;
            cout << "The depositted amount is: " << amount << endl;
        }else {
            cout << "Invalid deposit";
        }
     }


     // function to withdraw money

     void withdrawMoney(double amount){
        if(amount > 0 && amount <= balance){
            balance -= amount;
            cout << "Your withdraw amount is : " << amount << endl;
        }
     }
};

int main(){
   bankDetails account1 ("Hdfc224156", 1000);
   account1.depositMoney(500);
   account1.withdrawMoney(400);

   return 0;
}