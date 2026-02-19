//for:-

#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter the number up to which cube sum is to be printed: "<<endl;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum = sum + (i * i * i);
    }

    cout << "Sum of cubes = " << sum;
    return 0;
}
