#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    
    sort(v.begin(), v.end());

    
    v.erase(unique(v.begin(), v.end()), v.end());

    if (v.size() < 2) {
        cout << "Not enough distinct elements to find 2nd smallest or largest.\n";
        return 0;
    }

    cout << "Second Smallest = " << v[1] << endl;
    cout << "Second Largest = " << v[v.size()-2] << endl;

    return 0;
}