#include <iostream>
using namespace std;
int main(){
    int a[6]={1,2,3,4,5,6};
    int even_sum = a[0]+a[2]+a[4];
    int odd_sum = a[1]+a[3]+a[5];
    cout<<"odd index sum: "<<odd_sum<<endl;
    cout<<"even index sum: "<<even_sum;
    return 0;
}
