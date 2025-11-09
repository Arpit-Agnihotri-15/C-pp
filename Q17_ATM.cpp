#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double Bal, fee=0.50;
    int Wd;
    cout<<"Enter the account balance"<<endl;
    cin >> Bal;
    if (Bal<0 || Bal>2000){                 // assuming max balance is 2000
        cout<<"Invalid Input"<<endl;
        return 0;
    }
    cout<<"Enter the withdrawal amount"<<endl;
    cin >> Wd;
    if (Wd%5==0 && (Wd+fee)<=Bal){
        Bal = Bal - Wd - fee;
        cout<<"New Balance: "<<fixed<<setprecision(2)<<Bal<<"$"<<endl;
    }
    else{
        cout<<"Current Balance: "<<fixed<<setprecision(2)<<Bal<<"$"<<" Withdrawal not possible"<<endl;
    }
    return 0;
}