#include <iostream>
using namespace std;

int main() {
    int num, rev = 0, temp;
    cin >> num;     // Input 4-digit number
    temp = num;

    // Reverse using loop
    while (temp > 0) {
        int digit = temp % 10;
        rev = rev * 10 + digit;
        temp /= 10;
    }

    // Check palindrome using ternary operator
    (num == rev) ? cout << "Yes" : cout << "No";

    return 0;
}
