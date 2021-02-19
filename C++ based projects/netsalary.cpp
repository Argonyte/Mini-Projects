//Calculate the net salary of a user
//Author: Argonyte
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float netSalary, basicSalary, allowancePercentage, deductionsPercentage;

    cout << "Enter the Basic Salary: \n";
    cin >> basicSalary;
    cout << "Enter the Allowance Percentage: \n";
    cin >> allowancePercentage;
    cout << "Enter the Deductions Percentage: \n";
    cin >> deductionsPercentage;

    netSalary = basicSalary + (basicSalary * allowancePercentage / 100) - (basicSalary * deductionsPercentage / 100);
    
    cout << "The Net Salary is: " << netSalary;
    return 0;
}