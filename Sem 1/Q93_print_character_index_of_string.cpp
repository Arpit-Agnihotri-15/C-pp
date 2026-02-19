#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1;
    getline(cin, s1);

    cout << s1 << endl;
    cout << s1.at(0) << endl;  // prints first character

    return 0;
}
