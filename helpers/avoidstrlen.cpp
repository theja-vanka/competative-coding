// Program to avoid strlen() function while looping a string

#include <iostream>

using namespace std;

int main(){
    string s = "Hello";
    
    for(int i=0; s[i]; i++)
        cout << "Index : " << i << ", Character :" << s[i] << endl;
    
    return 0;
}