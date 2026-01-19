#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], sub[100];
    int start, length, i;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter starting position: ";
    cin >> start;

    cout << "Enter length of substring: ";
    cin >> length;

    for (i = 0; i < length; i++) {
        sub[i] = str[start + i];
    }

    sub[i] = '\0';   // null terminate substring

    cout << "Extracted substring: " << sub;

    return 0;
}
