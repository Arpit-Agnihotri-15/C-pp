#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;   
    int n;
    cout << "Enter Size: \n";
    cin >> n;        

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
        
    }
    if (v.size() > 3){
        v.erase(v.begin() + 2);
    }
    else    
        cout<<"array is of smaller size\n";
    

    cout << "Vector elements: \n";
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}