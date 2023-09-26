#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int temp = n;
    int last_digit = 0;
    int sum = 0;
    while(n!=0){
        last_digit = n%10;
        sum +=last_digit;
        n /=10;
    }
    cout<<"Sum of digits of "<<temp<<" is "<<sum<<endl;
} 