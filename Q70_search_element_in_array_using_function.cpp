#include <iostream>
using namespace std;

int search(int arr[], int n, int target){
    for (int i = 0; i < n; i++){
        if (arr[i] == target){
            return i;       
        }
    }
    return -1; 
}   

int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> target;

    int result = search(arr, n, target);

    if (result != -1){
        cout << target << " Element found at index " << result << endl;
    }
    else{
        cout << target << " Element not found in the array" << endl;
    }

    return 0;
}
