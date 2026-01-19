#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], sub[100];
    int start, length;

    cout << "Enter string: ";
    cin.getline(str, 100);

    cout << "Enter starting position: ";
    cin >> start;

    cout << "Enter length: ";
    cin >> length;

    strncpy(sub, str + start, length);
    sub[length] = '\0';

    cout << "Substring: " << sub;

    return 0;
}
