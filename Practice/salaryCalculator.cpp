#include <iostream>
using namespace std;

int main() {
    // Input basic salary
    double basicSalary;
    cout << "Enter Basic Salary: ";
    cin >> basicSalary;

    // Calculate dearness allowance (35% of basic salary)
    double dearnessAllowance = 0.35 * basicSalary;

    // Calculate house rent (25% of basic salary)
    double houseRent = 0.25 * basicSalary;

    // Calculate gross salary
    double grossSalary = basicSalary + dearnessAllowance + houseRent;

    // Display gross salary
    cout << "Gross Salary: " << grossSalary << endl;

    return 0;
}
