#include <iostream>
using namespace std;

int main() {
   int age;
   string name;
   cout<<"Enter your age \n";
   cin >> age;
   
   cin.ignore();
   
   cout<<"Enter your Name \n";
   getline(cin,name);
   cout<<"Age = "<<age<<endl;
   cout<<"Name = "<<name<<endl;
   return 0;
}
// This code takes an integer input for age and a string input for name. It uses cin to read the age and getline to read the name, ensuring that the input buffer is properly managed with cin.ignore().
// Example input:   25
//                  John Doe    
// Example output: Age = 25
//                 Name = John Doe
// average code style