#include <iostream>
using namespace std;

int main()
{
    int a = 45;
    cout << "Value: " << a << endl;
    cout << "Address: " << &a << endl;
    int *x = &a; // x is storing the address of a
    *x = 78;     // access the value at x
    cout << "Value of a " << a << endl;
    cout << (*x + a) << endl; // value at x + a
    int y = 79;
    int *pt = &y;    // pointer to integer
    int **ptr = &pt; // pointer to pointer
    cout << **ptr << endl;
    **ptr = **ptr + 1;
    cout << **ptr << endl;
    cout << &pt << endl;
    cout << &ptr << endl;
    *pt = 56;
    cout << *pt << endl;
}