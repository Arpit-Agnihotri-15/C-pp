#include <iostream>
using namespace std;

int main() {
    int n, sumEven = 0, sumOdd = 0;
    cout << "Enter the number of elements: ";
    cin >> n;

    int number;
    for (int i = 0; i < n; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> number;

        if (number % 2 == 0)
            sumEven += number;
        else
            sumOdd += number;
    }

    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Sum of odd numbers: " << sumOdd << endl;

    return 0;
}