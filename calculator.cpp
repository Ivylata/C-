#include <iostream>
#include <string>

using namespace std;

double calculate(){
    double num1, num2, result;
    char operation;

    cout << "Enter your first number: " << endl;
    cin >> num1;
    cout << "Enter the second number: " << endl;
    cin >> num2;
    cout << "Select an operator (+, -, *, /): " << endl;
    cin >> operation;

    // Performing the operation based on the operator
    switch(operation){
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break; 
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error! Division by zero." << endl;
                return 0;
            }
            break;
        default:
            cout << "Invalid operator" << endl;
            return 0;
    }

    return result;  
}

int main() {
    double result = calculate();  
    cout << "The result is: " << result << endl; 
    return 0;
}
