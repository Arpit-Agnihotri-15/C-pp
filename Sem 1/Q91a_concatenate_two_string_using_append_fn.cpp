#include <iostream>
#include <string>
using namespace std;
int main(){
    string s1,s2,s3;
    getline(cin,s1);
    getline(cin,s2);
    s3=s1.append(" ").append(s2);
    cout<<"After append: "<<s3<<endl;
    return 0;
}
