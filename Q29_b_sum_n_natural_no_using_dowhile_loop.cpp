//do while:-

#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number up to which sum is to be printed: " << endl;
    int n;
    cin >> n;
    int i = 1;
    int sum = 0;
    do {
        sum = sum + i;
        i++;
    } while (i <= n);
    cout << "Sum = " << sum;
    return 0;
}

