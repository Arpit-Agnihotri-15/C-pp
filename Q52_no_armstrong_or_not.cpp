#include <iostream>
using namespace std;

int main() {
    int n, originalNumber, remainder, result = 0;
    cout << "Enter an integer: ";
    cin >> n;
    originalNumber = n;

    while (originalNumber != 0) {
        remainder = originalNumber % 10;
        result += remainder * remainder * remainder;
        originalNumber /= 10;
    }

    if (result == n)
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is not an Armstrong number.";

    return 0;
}