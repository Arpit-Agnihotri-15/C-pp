int modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2; // Example modification: double each element
    }
    return 0; // Return 0 to indicate success
}
#include <iostream>
using namespace std;

int main() {
    const int size = 5;
    int myArray[size] = {1, 2, 3, 4, 5};
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;

    modifyArray(myArray, size);

    cout << "Modified array: ";
    for (int i = 0; i < size; i++) {
        cout << myArray[i] << " ";
    }
    cout << endl;
     
    return 0;
}