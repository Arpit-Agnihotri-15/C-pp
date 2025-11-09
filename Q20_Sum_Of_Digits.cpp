#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, digit;

    cout << "Enter a 4-digit number: ";
    cin >> num;

    while (num > 0) {
        digit = num % 10;     // extract last digit
        sum = sum + digit;    // add it to sum
        num = num / 10;       // remove last digit
    }

    cout << "Sum of digits = " << sum << endl;

    return 0;
}
