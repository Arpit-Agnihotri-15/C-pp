//dowhile:-

#include <iostream>
using namespace std;

int main() {
    int n, i = 1, sum = 0;
    cout << "Enter the number up to which cube sum is to be printed: "<<endl;
    cin >> n;

    do {
        sum = sum + (i * i * i);
        i++;
    } while (i <= n);

    cout << "Sum of cubes = " << sum;
    return 0;
}
