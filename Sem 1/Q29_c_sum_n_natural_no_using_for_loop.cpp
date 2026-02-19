
//for:-

#include <iostream>
using namespace std;

int main() {
    cout << "Enter the number up to which sum is to be printed: "<<endl;
    int n;
    cin >> n;
    int sum = 0;
    for(int i=1 ; i<=n ; i++){
        sum = sum+i;
    }
    cout << "Sum = " << sum;
    return 0;
}

