#include <iostream>
using namespace std;

int sum(int a, int b){
    int sum = a + b;
    return sum;
}

int difference(int a, int b){
    int diff;
    if (a > b){
        diff = a - b;
    }
    else{
        diff = b - a;
    }
    return diff;
}

int multiply(int a, int b){
    int product = a * b;
    return product;
}

int division(int a, int b){
    int quo;   
    
    if(b == 0){
        cout << "Division by 0 not possible";
        return 0;   
    }

    quo = a / b;  
    return quo;    
}

int main(){
    int ch,a,b;
    cout<<"****Calculator Menu****\n";
    cout<<"1 Additon\n";
    cout<<"2 Subtraction\n";
    cout<<"3 Multiplication\n";
    cout<<"4 Division\n";
    cout<<"5 Exit\n";
    cout<<"Enter your Choice:\n";
    cin>>ch;
    cout<< "Enter the two numbers:\n";
    cin>>a>>b;
    switch (ch){
        case 1:{
            cout << "Sum = " << sum(a, b) << endl;
            break;}
        case 2:{
            cout << "Difference = " << difference(a, b) << endl;
            break;}
        case 3:{
            cout << "Product = " << multiply(a, b) << endl;
            break;}
        case 4:{
            cout << "Quotient = " << division(a, b) << endl;
            break;}
        case 5:{
            cout<<"Exiting the menu."<<endl;
            break;}
        default:{
            cout << "Invalid choice. Please try again." << endl;
        }
    }
    return 0;
}