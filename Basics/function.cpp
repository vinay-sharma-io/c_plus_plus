#include <iostream>
using namespace std;
// without parameters
void Print()
{
    static int i = 1;
    cout << "Welcome bro.." << i << " times called " << endl;
    i++;
}
// with parameters
int sum(int a, int b)
{
    return a + b;
}
// Returns Multiply
int multi(int a, int b)
{
    return a * b;
}
// Returns Factorial
int factorial(int n){
    int i =1;
    int fact = 1;
    for(;i<=n;i++){
        fact = fact * i;
    }
    return fact;
}
// Prints Array
void printArray(int* arr,int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<< " ";
    }
}
int main()
{
    Print();
    Print();
    cout << sum(45, 3) << endl;
    cout << multi(45, 3) << endl;
    cout << factorial(6) << endl;
    int array[5] = {1,2,3,4,5};
    printArray(array,5);

    return 0;
}