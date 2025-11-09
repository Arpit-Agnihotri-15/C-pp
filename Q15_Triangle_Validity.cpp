#include <iostream>
using namespace std;
int main(){
    int T;
    cout<<"Enter number of test cases"<<endl;
    cin >> T;
    while (T--){
        int A, B, C;
        cout<<"Enter the angles of the triangle"<<endl;
        cin >> A >> B >> C;
        if (A+B+C == 180 && A>0 && B>0 && C>0){
            cout<<"Valid Triangle"<<endl;
        }
        else{
            cout<<"Invalid Triangle"<<endl;
        }
    }
    return 0;
}