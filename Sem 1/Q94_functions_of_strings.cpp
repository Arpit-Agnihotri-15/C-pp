#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1,s2,s3,s4,s5,s6,s7,s8;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);
    getline(cin, s4);
    getline(cin, s5);
    getline(cin, s6);
    getline(cin, s7);
    getline(cin, s8);
    
    
    
    cout<<"1. push back\n";
    cout << s1 << endl;
    s1.push_back('*');
    cout<<s1<<endl;
    
    
    cout<<"2. pop back\n";
    cout<< s2<<endl;
    s2.pop_back();
    cout<<s2<<endl;
    
    
    cout<<"3. insert\n";
    cout<<s3<<endl;
    s3.insert(2,"p");
    cout<<s3<<endl;
    
    
    cout<<"4. erase\n";
    cout<<s4<<endl;
    s4.erase(2,2);
    cout<<s4<<endl;
    
    
    cout<<"5. replace\n";
    cout<<s5<<endl;
    s5.replace(2,2,"HI");
    cout<<s5<<endl;
    
    
    cout << "6. substr\n";
    cout << s6 << endl;    
    cout << s6.substr(1, 3)<<endl;   


    cout<<"7. find\n";
    cout<<s7<<endl;
    cout<<s7.find("NA")<<endl;
    
    
    cout<<"8. rfind\n";
    cout<<s8<<endl;
    cout<<s8.rfind("NA")<<endl;
       
    return 0;
}
