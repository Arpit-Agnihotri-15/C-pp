#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "", line;
    int age;

    // take name (multiple lines)
    getline(cin, line);
    name += line + " ";

    getline(cin, line);
    name += line + " ";

    // take age
    cin >> age;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    return 0;
}
// This program takes a multi-line input for the name and a single integer input for the age,
// then prints them out in a formatted manner.
