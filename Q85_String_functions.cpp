#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    int choice;

    cout << "---- STRING FUNCTIONS MENU ----\n";
    cout << "1. string.length() using cin\n";
    cout << "2. string.length() using getline\n";
    cout << "3. strcpy()\n";
    cout << "4. strncpy()\n";
    cout << "5. strcat()\n";
    cout << "6. strncat()\n";
    cout << "7. strcmp() and strncmp()\n";
    cout << "Enter your choice: ";
    cin >> choice;
    cin.ignore();   // clear buffer

    switch (choice) {

        case 1: {
            string str;
            cin >> str;
            cout << "Length: " << str.length();
            break;
        }

        case 2: {
            string str;
            getline(cin, str);
            cout << "Length: " << str.length();
            break;
        }

        case 3: {
            char str1[100], str2[100];
            cin.getline(str1, 100);
            strcpy(str2, str1);
            cout << "Copied string: " << str2;
            break;
        }

        case 4: {
            char str1[100], str2[100];
            cin.getline(str1, 100);
            strncpy(str2, str1, 5);
            str2[5] = '\0';   // important
            cout << "Copied string: " << str2;
            break;
        }

        case 5: {
            char str1[100], str2[100];
            cin.getline(str1, 100);
            cin.getline(str2, 100);
            strcat(str1, str2);
            cout << "Concatenated string: " << str1;
            break;
        }

        case 6: {
            char str1[100], str2[100];
            cin.getline(str1, 100);
            cin.getline(str2, 100);
            strncat(str1, str2, 4);
            cout << "Concatenated string: " << str1;
            break;
        }

        case 7: {
            char str1[100], str2[100];
            cin.getline(str1, 100);
            cin.getline(str2, 100);
            cout << "strcmp(): " << strcmp(str1, str2) << endl;
            cout << "strncmp(): " << strncmp(str1, str2, 5);
            break;
        }

        default:
            cout << "Invalid choice";
    }

    return 0;
}


// This program provides a menu-driven interface to demonstrate various string functions
// including length calculation, copying, concatenation, and comparison using both C++
// string class and C-style strings.
