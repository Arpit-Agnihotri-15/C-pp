#include <iostream>
using namespace std;

int value(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "\nAfter Swapping: ";
    cout << a << " " << b << endl;
    return 0;}

int main(){
    int a,b;
    cout << "Enter First number:";
    cin >> a;
    cout << "Enter second number:";
    cin >> b;
    cout << "\nBefore Swapping: ";
    cout << a << " " << b << endl;
    value(a, b);
    return 0;
}