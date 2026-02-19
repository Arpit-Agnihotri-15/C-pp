#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);

    // remove spaces from end of s1
    while (!s1.empty() && s1.back() == ' ')
        s1.pop_back();

    // remove spaces from beginning of s2
    while (!s2.empty() && s2.front() == ' ')
        s2.erase(s2.begin());

    s3 = s1 + " " + s2;
    cout << "After append: " << s3 << endl;

    return 0;
}
