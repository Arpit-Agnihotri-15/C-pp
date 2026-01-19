#include <iostream>
using namespace std;

int main() {
 
   string str;
   cout<<"Enter String: \n";
   getline(cin,str);

   cout<<"String = "<<str<<endl;
   cout<<"length of String is: "<<str.length()<<endl;
   
   return 0;
}

// This code takes a string input for name and prints the name along with its length using the length() function.
// Example input: John Doe
// Example output: Name = John Doe
//                 length of Name is: 8
// good code style