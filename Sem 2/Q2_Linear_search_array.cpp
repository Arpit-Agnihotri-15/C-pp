#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "num of elements: ";
    cin >> n;
    cout<<n<<endl;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout<<"Elements are: ";
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

    int key;
    cout << "search: ";
    cin >> key;

    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i + 1;
            break;
        }
    }

    if (pos != -1) {
        cout << "Found\n";
        cout << "position: " << pos << endl;
    } else {
        cout << "not found\n";
    }

    return 0;
}