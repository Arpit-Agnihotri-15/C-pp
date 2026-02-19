#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2, s3;
    getline(cin, s1);   // Arpit
    getline(cin, s2);   // Agnihotri
    getline(cin, s3);   // 002

    // 1. Print: Arpit Agnihotri
    cout << s1 << " " << s2 << endl;

    // 2. Print: Agnihotri
    cout << s2 << endl;

    // 3. Make temp = first 4 characters of s2
    string temp;
    temp.assign(s2, 0, 4);   // assign(starting from index 0, length 4)

    // Print: 002 Agni
    cout << s3 << " " << temp << endl;

    return 0;
}
