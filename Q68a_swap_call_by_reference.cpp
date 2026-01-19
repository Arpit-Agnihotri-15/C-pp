#include <iostream>
using namespace std;

int swapNumbers(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter Swapping: " << a << " " << b << endl;

    return 0;   
}

int main() {
    int a, b;

    cout << "Enter First number: ";
    cin >> a;

    cout << "Enter Second number: ";
    cin >> b;
    
    cout << "\nBefore Swapping: " << a << " " << b << endl;
    swapNumbers(a, b);  
    

    return 0;
}
