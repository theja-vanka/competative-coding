// Program to multiply and divide by 2 using binary operators

#include <iostream>

using namespace std;

int main()
{
    int n = 64;
    cout << n << " x 2 = " << (n << 1) << endl;
    cout << n << " / 2 = " << (n >> 1) << endl;

    return 0;
}