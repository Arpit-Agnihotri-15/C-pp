int salaryIncrement(int &salary, int increment) {
    salary = 15000; // Modifying salary directly via reference
    salary += increment; 
    return salary; 
}
#include <iostream>
using namespace std;
int main() {
    int salary, increment;
    cout << "Enter current salary: ";
    cin >> salary; // This input will be overridden in the function
    cout << "Enter increment amount: ";
    cin >> increment;
    
    int newSalary = salaryIncrement(salary, increment);
    cout << "New salary after increment: " << newSalary << endl;
     
    return 0;
}