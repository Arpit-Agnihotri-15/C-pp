//while:-

#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    int n, i = 1;
    double sum = 0;

    cout << "Enter the number up to which cube sum is to be printed: "<<endl;
    cin >> n;

    while (i <= n) {
        sum = sum + pow(i, 3);
        i++;
    }

    cout << "Sum of cubes = " << sum;
    return 0;
}
