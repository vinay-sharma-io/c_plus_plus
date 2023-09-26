#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    cout<<"Hello World!!"<<endl; // cout and cin function declared in iostream Header file
    int i;
    cout<<"Enter a number: "<<endl; // output
    cin>>i; // input
    cout<<"You entered "<<i<<endl;
    // This is a single line comment
    /*This is 
    a Multiline 
    Comment*/
    const int val = 45;
    cout<<val<<endl;
    // val = 48; //Constant Values can't be changed...
    // Manipulators
    // setw() 
    int a =5;
    int b = 45;
    int c =466;
    int d =8466;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<d<<endl;
    cout<<setw(4)<<a<<endl;
    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;
    cout<<setw(4)<<d<<endl;
 
    return 0;
}