#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int temp = n;
    int lastDigit = 0;
    int rev = 0;
    while(n!=0){
        lastDigit = n%10; // get the last digit
        rev = rev*10+lastDigit; // multiply by 10 in the last answer and then add last digit
        n/=10; // reduce the last digit
    }
    cout<<"Reverse of "<<temp<<" is "<<rev<<endl;
} 