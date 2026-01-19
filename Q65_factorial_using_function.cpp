#include <iostream>
using namespace std;
int fact(int a)
{
    int c=1;
    if(a>1)
    {
    for(int i=1;i<=a;i++)
    {
        c=c*i;
    }
    }
    else
    {
        c=1;
    }
    return c;
}

int main(){
    int a;
    cout<<"Enter the Number:\n";
    cin>>a;
    cout<<"Factorial of the number is: "<< fact(a);
    return 0;
}
