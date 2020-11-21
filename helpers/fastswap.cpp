// Program to swap two numbers without using extra space

#include <iostream>

using namespace std;

int main()
{
    
    int a = 10;
    int b = 20;

    cout << "Initial Values are : " << a << " " << b << endl;

    a ^= b;
    b ^= a;
    a ^= b;

    cout << "Swapped Values are : " << a << " " << b << endl;
    
    return 0;

}