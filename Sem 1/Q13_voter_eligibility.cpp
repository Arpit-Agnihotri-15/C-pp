# include <iostream>
using namespace std;
int main(){
    int age;
    cout << " Enter your age:";
    cin >> age;
    age >=18 ? cout << " You are eligible to vote." :cout << " You are not eligible to vote.";
    return 0;
}