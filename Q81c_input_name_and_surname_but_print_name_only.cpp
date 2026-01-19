#include <iostream>
using namespace std;

int main() {
    string fullName;

    cout << "Enter your name and surname:\n ";
    getline(cin, fullName);

   
    int spaceIndex = fullName.find(' ');

    
    string firstName = fullName.substr(0, spaceIndex);

    cout << "Your name is: " << firstName << endl;

    return 0;
}

// This code takes an input string containing a name and surname separated by a space character
// and prints only the name part. It uses the getline function to read the full input line
// and the find function to locate the space character.
// Example input: John Doe
// Example output: John
// good code style