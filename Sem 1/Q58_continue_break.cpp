#include <iostream> 
using namespace std; 
int main(){ 
    for (int i = 1; i <= 6; i++){ 
        if (i == 3){ 
            cout<<"Skipping 3"<<endl;
            continue; // skips 3 
        } 
        if (i == 5){ 
            break;   // stops at 5 
        } 
        cout << i << endl; 
    }
    cout<< "outside the loop because 5 is encountered"<<endl;
    return 0; 
}