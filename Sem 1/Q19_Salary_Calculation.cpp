#include <iostream>
using namespace std;

int main() {
    float BS, DA, HRA, PF, Gross, Net;

    cout << "Enter Basic Salary: ";
    cin >> BS;

    // Calculations
    DA = 0.25 * BS;           // 25% of Basic Salary
    HRA = 0.15 * BS;          // 15% of Basic Salary
    Gross = BS + DA + HRA;    // Gross Salary
    PF = 0.10 * Gross;        // 10% Deduction
    Net = Gross - PF;         // Net Salary

    cout << "Net Salary = " << Net << endl;

    return 0;
}
