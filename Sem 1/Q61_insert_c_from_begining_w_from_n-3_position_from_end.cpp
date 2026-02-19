#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter number of characters:\n ";
    cin >> n;

    vector<char> v(n);

    cout << "Enter characters:\n";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    
    v.insert(v.begin(), 'c');

    
    int pos = v.size() - 3;

    
    if(pos >= 0 && pos <= v.size())
        v.insert(v.begin() + pos, 'w');
    else
        cout << "Invalid position for inserting 'w'\n";

    
    cout << "Final vector: ";
    for(char ch : v){
        cout << ch << " ";
    }

    return 0;
}
