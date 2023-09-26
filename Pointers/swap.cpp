#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    cout <<"Address in swap: "<< &b << endl;
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main()
{
    int a = 45;
    int b = 67;
    cout << "Value: " << a << endl;
    cout << "Address in main: " << &b << endl;
    cout<<"Before swapping "<<a<<" "<<b<<endl;
    swap(&a, &b);
    cout<<"After  swapping "<<a<<" "<<b<<endl;
}