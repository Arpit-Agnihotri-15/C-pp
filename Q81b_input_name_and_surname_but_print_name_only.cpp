#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter your name and surname using &: \n";
    cin >> input;    
    int pos = input.find('&');

    
    string name = input.substr(0, pos);

    cout << "Your name is: " << name << endl;

    return 0;
}


// This code takes an input string containing a name and surname separated by an '&' character
// and prints only the name part. It uses the getline function to read input until the '&' character is encountered.
// Example input: John&Doe  
// Example output: John
// not very good code style