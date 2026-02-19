#include <iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    // Check leap year using ternary operator
    ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) 
        ? cout << "Leap Year" 
        : cout << "Not a Leap Year";

    return 0;
}
