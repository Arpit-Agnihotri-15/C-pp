#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (str1.length() > str2.length()) {
        cout << "Longest string: " << str1 << endl;
    } else if (str2.length() > str1.length()) {
        cout << "Longest string: " << str2 << endl;
    } else {
        cout << "Both strings are of equal length." << endl;
    }

    return 0;
}
