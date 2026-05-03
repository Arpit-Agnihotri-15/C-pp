#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(float arr[], int size){
    vector<vector<float>> bucket(size, vector<float>());

    // Step 1: Put elements into buckets
    for(int i = 0; i < size; i++){
        int index = arr[i] * size;
        bucket[index].push_back(arr[i]);
    }

    // Step 2: Sort each bucket
    for(int i = 0; i < size; i++){
        if(!bucket[i].empty()){
            sort(bucket[i].begin(), bucket[i].end());
        }
    }

    // Step 3: Merge buckets
    int k = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < bucket[i].size(); j++){
            arr[k++] = bucket[i][j];
        }
    }
}

int main(){
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    float arr[n];

    cout << "Enter elements (between 0 and 1): ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bucketSort(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}