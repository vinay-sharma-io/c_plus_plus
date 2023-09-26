#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a number : " << endl;
    cin >> a >> b;
    cout << "Before swapping " << a << " " << b << endl; // val1,val2
    // first way using third variable
    // int temp = a + b;
    // b = a;
    // a = temp;
    // cout << "After swapping " << a << " " << b << endl; 
    // without using third variable
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping " << a << " " << b << endl; // val2,val1
    // another way using XOR operator
    a = a^b;
    b = a^b;
    a = a^b;
    cout << "After swapping " << a << " " << b << endl; // val1,val2
}