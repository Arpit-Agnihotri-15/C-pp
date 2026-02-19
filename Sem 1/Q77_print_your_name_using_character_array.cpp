#include <iostream>
using namespace std;

int main() {
   
    char name[] = {'A', 'r', 'p', 'i', 't', '\0'};

    cout << "Way 1: Printing each character using array:" << endl;
    for (int i = 0; name[i] != '\0'; i++) {
        cout << name[i];
    }
    cout << endl;

   
    cout << "Way 2: Printing full string from array:" << endl;
    cout << name << endl;

    
    
    char NAME[5] = {'A', 'r', 'p', 'i', 't'};

   
    cout << "Way 2: Printing each character:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << NAME[i];
    }
    cout << endl;

    
    cout << "Way 4: Printing full name:" << endl;
        for (int i = 0; i < 5; i++) {
        cout << NAME[i];
    }
    cout << endl;
    
    char names[] = {'A','r','p','i','t'};
    cout<< "way 5: Printing using array function"<<endl;
    for(int i = 0; i < sizeof(names); i++) {
        cout << names[i];
    }
    cout<<endl;
    
    char Names[] = {'A','r','p','i','t'};
    cout<<"way 6: Printing by dividing size of string with size of 0"<<endl;
    int size = sizeof(Names) / sizeof(Names[0]);

    for(int i = 0; i < size; i++) {
        cout << Names[i];
    }
    cout<<endl;
    cout<<"way 7 : to print a string"<<endl;
    char arr[6] = {'A','r','p','i','t'};
    cout<<arr<<endl;
    
    cout<<"way 8: to print a name"<<endl;
    char ar[]= "Arpit";
    cout<<ar<<endl;

    return 0;
}
