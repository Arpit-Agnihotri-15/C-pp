#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    num > 0 ? cout << num << " is positive.":(num <0 ? cout << num << " is negative.": cout << num << " is zero.");
    return 0;
}