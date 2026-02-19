//for:-

#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the no of which table to print"<<endl;
    int n;
    cin >>n;
    for (int i =1;i<=10; i++){
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
    }
    return 0;
}