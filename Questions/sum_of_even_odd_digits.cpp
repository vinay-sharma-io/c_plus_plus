#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    int temp = n;
    int last_digit = 0;
    int evenSum = 0;
    int oddSum = 0;
    while(n!=0){
        last_digit = n%10;
        if(last_digit%2==0){
            evenSum +=last_digit;
            n /=10;
        }
        else{
            oddSum +=last_digit;
            n /=10;
        }
        
    }
    cout<<"Sum of even digits of "<<temp<<" is "<<evenSum<<endl;
    cout<<"Sum of odd digits of "<<temp<<" is "<<oddSum<<endl;
} 