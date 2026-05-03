#include <iostream>
using namespace std;

class Teacher {
private:
    string name;
    string dept;
    string subject;
    double salary;

public:
    // Default Constructor
    Teacher() {
        cout << "Default Constructor Called\n";
    }

    // Parameterized Constructor
    Teacher(string n, string d, string s, double sal) {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    // Copy Constructor
    Teacher(const Teacher &t) {
        name = t.name;
        dept = t.dept;
        subject = t.subject;
        salary = t.salary;
    }

    // Setter Functions
    void setName(string n) { name = n; }
    void setDept(string d) { dept = d; }
    void setSubject(string s) { subject = s; }
    void setSalary(double sal) { salary = sal; }

    // Getter Functions
    string getName() { return name; }
    string getDept() { return dept; }
    string getSubject() { return subject; }
    double getSalary() { return salary; }

    // Method
    void changeDept(string newDept) {
        dept = newDept;
    }

    // Display Function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Dept: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }

    // Destructor
    ~Teacher() {
        cout << "Destructor Called\n";
    }
};

int main() {

    // Object using default constructor
    Teacher t1;

    t1.setName("Arpit");
    t1.setDept("CSE");
    t1.setSubject("Data Structures");
    t1.setSalary(50000);

    t1.display();

    cout << "\nAfter Department Change:\n";
    t1.changeDept("AI");
    t1.display();

    // Parameterized Constructor
    cout << "\nParameterized Constructor Object:\n";
    Teacher t2("Rahul", "ECE", "Signals", 60000);
    t2.display();

    // Copy Constructor
    cout << "\nCopy Constructor Object:\n";
    Teacher t3 = t2;
    t3.display();

    return 0;
}