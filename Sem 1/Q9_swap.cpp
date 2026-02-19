#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter First number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"\nBefore Swapping: a ="<<a<<", b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"\nAfter Swapping: a ="<<a<<", b="<<b<<endl;      
    return 0;
}