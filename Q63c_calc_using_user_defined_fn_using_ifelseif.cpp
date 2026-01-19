#include <iostream>
using namespace std;

int sum(int a, int b){
    return a + b;
}

int difference(int a, int b){
    return (a > b) ? (a - b) : (b - a);
}

int multiply(int a, int b){
    return a * b;
}

int division(int a, int b){
    if(b == 0){
        cout << "Division by 0 not possible\n";
        return 0;
    }
    return a / b;
}

int main(){
    int ch, a, b;

    while(true){   
        cout << "**** Calculator Menu ****\n";
        cout << "1 Addition\n";
        cout << "2 Subtraction\n";
        cout << "3 Multiplication\n";
        cout << "4 Division\n";
        cout << "5 Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        if(ch == 5){
            cout << "Exiting the menu.\n";
            break;   
        }

        cout << "Enter the two numbers: ";
        cin >> a >> b;

        if(ch == 1){
            cout << "Sum = " << sum(a, b) << endl;
        }
        else if(ch == 2){
            cout << "Difference = " << difference(a, b) << endl;
        }
        else if(ch == 3){
            cout << "Product = " << multiply(a, b) << endl;
        }
        else if(ch == 4){
            cout << "Quotient = " << division(a, b) << endl;
        }
        else{
            cout << "Invalid choice. Please try again.\n";
        }

        cout << endl;
    }

    return 0;
}

