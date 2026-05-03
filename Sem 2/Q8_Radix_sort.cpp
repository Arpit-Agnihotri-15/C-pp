#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void countSort(vector<int> &v, int pos){
    int n = v.size();

    // Step 1: frequency array (0–9 digits)
    vector<int> freq(10, 0);

    for(int i = 0; i < n; i++){
        freq[(v[i] / pos) % 10]++;
    }

    // Step 2: cumulative frequency
    for(int i = 1; i < 10; i++){
        freq[i] += freq[i - 1];
    }

    // Step 3: output array
    vector<int> ans(n);

    // Step 4: stable placement (reverse traversal)
    for(int i = n - 1; i >= 0; i--){
        ans[--freq[(v[i] / pos) % 10]] = v[i];
    }

    // Step 5: copy back
    for(int i = 0; i < n; i++){
        v[i] = ans[i];
    }
}

void radixSort(vector<int> &v){
    int max_ele = INT_MIN;

    for(int i = 0; i < v.size(); i++){
        max_ele = max(v[i], max_ele);
    }

    // Apply counting sort for each digit
    for(int pos = 1; (max_ele / pos) > 0; pos *= 10){
        countSort(v, pos);
    }
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    radixSort(v);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
    }

    return 0;
}

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void countSort(vector<int> &v, int pos){
    int n = v.size();
    vector<int> freq(10, 0);
    for(int i = 0; i < n; i++){
        freq[(v[i]/pos)%10]++;  
    }
    for(int i = 1; i<10; i++){
        freq[i] += freq[i-1];
    }
    vector<int> ans(n);
    for(int i = n-1; i>=0; i--){
        ans[--freq[(v[i]/pos)%10]] = v[i];
    }
    for(int i = 0; i<n; i++){
        v[i] = ans[i];
    }
}

void radixSort(vector<int> &v){
    int max_ele = INT_MIN;
    int n = v.size();
    for(int i = 0; i<n; i++){
        max_ele = max(v[i], max_ele);
    }
    for(int pos = 1; (max_ele/pos)>0; pos *= 10){
        countSort(v, pos);
    }
}

int main(){
    int n;
    cout<< "Enter the number of elements: ";
    cin>> n;
    vector<int> v(n);
    cout<<endl;
    cout<< "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cout<<endl;
    cout<< "Sorted elements: ";
    radixSort(v);
    for(int i = 0; i< n ; i++){
        cout<< v[i] << " ";
    }
    cout<<endl;
    return 0;
}

