#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
int area(int h, int w)
{
    return h * w;
}
float area(float r)
{
    return 3.14 * r * r;
}
int main()
{
    // functions with same name with diff arguments is called funciton overloading
    cout<<"Sum of two numbers : " << add(2, 5) << endl;     // add with two parameters will called
    cout<<"Sum of three numbers : " << add(2, 5, 10) << endl; // add with three parameters will called
    cout<<"Area of square : " << area(5, 4) << endl;
    cout<<"Area of circle : " << area(4) << endl;
    return 0;
}