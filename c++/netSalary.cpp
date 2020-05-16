#include <iostream>
using namespace std;

int main() {
    double basicSalary, percentageAllowance, percentageDeductions, netSalary;
    cout << "Enter your Basic Salary: ";
    cin >> basicSalary;

    cout << "Enter your percentage allowance: ";
    cin >> percentageAllowance;

    cout << "Enter the percentage of deduction: ";
    cin >> percentageDeductions;

    netSalary = basicSalary + basicSalary * percentageAllowance / 100 - basicSalary * percentageDeductions / 100;
    cout << "The Net salary is: " << netSalary << endl;
    return 0;
}
