#include <iostream>
using namespace std;

int main() {
    int A, B, C;

   
    cout << "Enter the first number: ";
    cin >> A;

    cout << "Enter the second number: ";
    cin >> B;

    cout << "Enter the third number: ";
    cin >> C;

    
    if (A >= B && A >= C) {
        cout << A << " is the largest number" << endl;
    }
    
    else if (B >= A && B >= C) {
        cout << B << " is the largest number" << endl;
    }
   
    else {
        cout << C << " is the largest number" << endl;
    }

    return 0;
}