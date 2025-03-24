#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<numeric>
#include<iterator>

using namespace std;

struct Employee
{
    int id;
    string name;
    double salary;
};


void displayEmployee(const Employee& emp){
    cout << "Employee ID: " << emp.id << ", Name: " << emp.name << " , Salary: $" << emp.salary << endl;
}

int main(){

    vector<Employee> employee = {
        {100, "Suresh", 10000},
        {101, "Naresh", 50000},
        {102, "Paul", 60000},
        {103, "Migual", 70000},
        {104, "Manoj", 20000},
        {105, "Rakesh", 80000},
    };

    sort(employee.begin(), employee.end(), [](const Employee& emp1, const Employee& emp2){
        return emp1.salary > emp2.salary;
    });

    cout <<"Employee sorted out according to their Salary (Highest to Lowest): \n";
    for_each(employee.begin(), employee.end(), displayEmployee);

    vector<Employee> higherPayees;
    copy_if(employee.begin(),
     employee.end(),
      back_inserter( higherPayees) , 
      [](const Employee& emp){
        return emp.salary > 50000;
    });

    cout << "Employee who earns more than 50000: \n" ;
    for_each(higherPayees.begin(), higherPayees.end(), displayEmployee);
double totalSalary = accumulate(employee.begin(), 
employee.end(),
0.0,
[](double sum, Employee& emp){
    return sum + emp.salary;
});


double avgSalary = totalSalary / employee.size();

cout << "The average salary is : " << avgSalary << endl;

auto highestPayee = max_element(employee.begin(),
employee.end(),
[](const Employee& e1, const Employee& e2){
    return e1.salary < e2.salary;
});


    cout << "Employee with the highest salary: \n";
    displayEmployee(*highestPayee);  // Dereference the iterator to access the Employee object

    return 0;
}