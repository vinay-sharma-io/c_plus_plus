#include <iostream>
using namespace std;

// return_type function_name(parameter_type parameter1,parameter_type parameter2,...)
void greet()
{
    cout << "Good Morning..." << endl;
    cout << "How are you?" << endl;
}
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c) // function overloading
{ 
    return a + b + c;
}
int max(int a, int b)
{
    return (a > b) ? a : b; // using ternary operator
}
void swap(int* a,int *b){
    *a = *a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
int main()
{
    greet();
    cout << sum(34, 67) << endl; // call by value
    cout << sum(23, 5, 77) << endl;
    cout << max(34, 34) << endl;
    int n = 45;
    int m = 96;
    int *a = &n, *b = &m;
    cout<<"First number and second number before swappig "<<n<<" "<<m<<endl;
    swap(a,b); // call by reference
    cout<<"First number and second number after swappig "<<n<<" "<<m<<endl;

    return 0;
}