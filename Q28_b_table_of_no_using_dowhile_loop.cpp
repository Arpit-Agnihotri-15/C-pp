//do while:-

#include <iostream>
using namespace std;

int main() {
    cout<<"Enter the no of which table to print"<<endl;
    int n;
    cin >>n;
    int i =1;
    do{
        cout<<n<<"*"<<i<<"="<<n*i<<endl;
        i++;
    }while(i<=10);
    return 0;
}