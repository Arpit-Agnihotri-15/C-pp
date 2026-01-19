#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int roll;

public:
    void read() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> roll;
    }

    void display() {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << roll << endl;
    }
};

int main() {
    Student s;   

    s.read();    
    s.display(); 

    return 0;
}
