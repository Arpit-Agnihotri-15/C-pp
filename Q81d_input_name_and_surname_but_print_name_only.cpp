#include <iostream>
using namespace std;

int main() {
    string fullName;

    cout << "Enter your name and surname using &:\n ";
    getline(cin, fullName);   

    // Find the location of '&'
    int pos = fullName.find('&');

    // Extract name before '&'
    string firstName = fullName.substr(0, pos);

    cout << "Your name is: " << firstName << endl;

    return 0;
}

// This code takes an input string containing a name and surname separated by an '&' character
// and prints only the name part. It uses the getline function to read the full input line      
// and the find function to locate the '&' character.
// Example input: John&Doe
// Example output: John
// average code style