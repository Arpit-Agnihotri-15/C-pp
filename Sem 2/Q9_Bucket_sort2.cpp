#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(float arr[], int size){
    vector<vector<float>> bucket(size, vector<float>());

    float max_ele = arr[0];
    float min_ele = arr[0];

    for(int i = 0; i < size; i++){
        max_ele = max(arr[i], max_ele);
        min_ele = min(arr[i], min_ele);
    }

    if(max_ele == min_ele){
        return; // all elements same
    }

    float range = (max_ele - min_ele) / size;

    // Put elements into buckets
    for(int i = 0; i < size; i++){
        int index = (arr[i] - min_ele) / range;

        if(index >= size) index = size - 1;

        float diff = (arr[i] - min_ele) / range - index;

        if(diff < 1e-6 && arr[i] != min_ele){
            bucket[index - 1].push_back(arr[i]);
        }
        else{
            bucket[index].push_back(arr[i]);
        }
    }

    // Sort buckets
    for(int i = 0; i < size; i++){
        if(!bucket[i].empty()){
            sort(bucket[i].begin(), bucket[i].end());
        }
    }

    // Merge
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

    cout << "Enter elements: ";
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