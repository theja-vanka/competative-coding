// Program to instantly get odd or even withou modulo operator

#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    cout << "Enter a number : " << endl;
    cin >> number;

    if(number & 1){
        cout << "Entered number is : Odd" << endl;
    }
    else{
        cout << "Entered number is : Even" << endl;
    }
    
    return 0;
}