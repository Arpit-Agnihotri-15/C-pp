#include <iostream>
#include <string>
using namespace std;

class Employee {
public:
    string name;
    long long salary;


    void read() {
        cout << "Enter employee name: ";
        getline(cin, name);
        cout << "Enter salary: ";
        cin >> salary;
    }

    void display() {
        cout << "\nEmployee Details\n";
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Employee e;   

    e.read();     
    e.display();  

    return 0;
}
