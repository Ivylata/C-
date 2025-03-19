#include<iostream>
#include<string>
#include<ctime>

using namespace std;
string getUserChoice();



string getUserChoice(){

    string userChoice;
    cout << "Rock-Paper-Scissors Game" << endl;
    
    do
    {
        cout << "***************************** "<< endl;
        cout << "Choose between : Rock, Paper, Scissor " << endl;
        cin >> userChoice;

    } while (userChoice != "Rock" && userChoice != "Paper" && userChoice != "Scissor");
    return userChoice;
}

void showChoice(string choice){

   if(choice == "Rock"){
    cout << " Rock \n" ;
   } else if(choice == "Paper"){
    cout << " Paper \n";
   } else if(choice == "Scissor"){
    cout << " Scissor";
   }
   else{
    cout << "Invalid";
   }
}

void chooseWinner(string userChoice, string computerChoice){

    if(userChoice == computerChoice){
    cout << "It's a tie"; }
    else if(userChoice == "Paper" && computerChoice == "Rock")
    {cout << "You Won"; }
    else if(userChoice == "Rock" && computerChoice == "Scissor")
    {cout << "You Won";}
    else if(userChoice == "Scissor" && computerChoice == "Paper")
    {cout << "You Won";}
    else if(userChoice == "Rock" && computerChoice == "Paper")
    {cout << "Computer Won"; }
    else if(userChoice == "Paper" && computerChoice == "Scissor")
    {cout << "Computer Won";}
    else if(userChoice == "Scissor" && computerChoice == "Paper")
    {cout << "Computer Won";}
    else{cout << "You loose" ;} 
    
}

string getComputerChoice(){
    
    srand(time(0));
    int num = rand()%3 + 1;
    switch (num){
        case 1 : return "Rock";
        case 2 : return "Scissor";
        case 3 : return "Paper";
        default : return "Invalid";
    }
    
    
    return 0;
}


int main(){
    string player;
    player = getUserChoice();
    string computer;
    computer = getComputerChoice ();
    cout<< "You Choose : \n" ;
    showChoice(player);
    cout<< "Computer Choose : \n" ;
    showChoice(computer);
cout << "***************************************** \n";
    chooseWinner(player,computer);
    return 0;
}
