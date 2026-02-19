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
    int a, b;
    cout << "Enter two numbers: "<<endl;
    cin >> a >> b;

    cout << "Sum = " << sum(a, b) << endl;
    cout << "Difference = " << difference(a, b) << endl;
    cout << "Product = " << multiply(a, b) << endl;
    cout << "Quotient = " << division(a, b) << endl;

    return 0;
}
