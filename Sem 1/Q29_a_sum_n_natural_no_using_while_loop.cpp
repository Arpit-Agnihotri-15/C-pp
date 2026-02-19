//while:-

#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number up to which sum is to be printed: "<<endl;
    int n;
    cin >> n;
    int i = 1;
    int sum = 0;

    while (i <= n) {
        sum = sum + i;  
        i++;
    }
    cout << "Sum = " << sum;
    return 0;
}

