#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char str[] = "Helloworld";
    char sub[20];
    char *ptr = strstr(str,"world");
    if (ptr != NULL){
        strcpy(sub,ptr);
        cout<<"Extracted substring: "<<sub<<endl;
    }
    else{
        cout<<"substring not found";
    }
    return 0;
}
