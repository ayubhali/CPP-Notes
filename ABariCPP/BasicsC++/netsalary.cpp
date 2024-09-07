#include <iostream>
using namespace std;

int main()
{
    float basic_salary;
    float allowance;
    float deduction;
    float net_salary;

    cout << "Enter the Basic salary: ";
    cin >> basic_salary;

    cout << "Enter the Percentage of allowances: ";
    cin >> allowance;

    cout << "Enter the percentage of deductions: ";
    cin >> deduction;

    net_salary = (basic_salary + basic_salary) * (allowance/100) - (basic_salary) * (deduction/100);

    cout << "Your net salary is: " << net_salary << endl;

    return 0;
}