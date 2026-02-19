#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, surname, fullName;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your surname: ";
    getline(cin, surname);

    fullName = name + " " + surname;

    cout << "Full Name: " << fullName;

    return 0;
}
