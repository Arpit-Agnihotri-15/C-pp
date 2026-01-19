#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v = {7,2,9,4};
    int mx = *max_element(v.begin(),v.end());
    cout<<"max = "<<mx<<endl;
    int mn = *min_element(v.begin(),v.end());
    cout<<"min = "<<mn<<endl;
    return 0;
}
