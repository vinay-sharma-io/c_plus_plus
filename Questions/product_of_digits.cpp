#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int temp = n;
    int last_digit = 0;
    int prod = 1;
    while(n!=0){
        last_digit = n%10;
        prod *=last_digit;
        n /=10;
    }
    cout<<"Product of digits of "<<temp<<" is "<<prod<<endl;
} 