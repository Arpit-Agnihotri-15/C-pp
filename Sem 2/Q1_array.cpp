# include <iostream>
using namespace std;
int main(){
    int A[10];
    int loc, val;
    for (int i =0; i<10; i++){
        cin >> A[i];
    }
    for (int i = 0; i<10; i++){
        cout<< A[i]<<',';
    }
    cout<<endl;
    cout<<"Enter location\n";
    cin >> loc;
    for(int i = loc; i <10; i++){
        A[i-1] = A[i];
    }
    for(int i = 0; i<9; i++){
        cout<<A[i]<<',';
    }
    cout << endl;
    cout << "ENter right shift locations:\n";
    cin >> val;
    for(int i = 8; i>= loc -1; i--){
        A[i+1]=A[i];
    }
    A[loc-1] = val;
    for(int i = 0; i<10; i++){
        cout<<A[i]<<',';
    }
    return 0;
}