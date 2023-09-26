#include<iostream>
using namespace std;

int main(){
    cout<<"Running..."<<endl;
    int val = 65;

    // If Statement
    if(val > (85/5)){ // Check the Condition
        cout<<val<<endl; // If true then print the value of val
    }
    cout<<"Done."<<endl; 

    // If-Else Statement
    int number = 89;
    if(number%2==0){
        cout<<"Even Number"<<endl; // If true
    }
    else{
        cout<<"Odd Number"<<endl; // else
    }

    // Nested If-else 
    int p_age = 86;
    if(p_age>=18){
        if(p_age<60){
            cout << "You are eligible to work"<<endl;
        }
        else{
            cout <<"You can't work because you're too old."<<endl;
        }
    }
    else{
        cout<<"You are too young to work!!"<<endl;
    }

    // If-else Ladder
    int n1 = 34,n2=45,n3=47;
    if(n1>n2 && n1>n3){
        cout<<n1<<"is Greatest"<<endl;
    }
    else if(n2>n1 && n2>n3){
        cout<<n2<<"is Greatest"<<endl;
    }
    else {
        cout<<n3<<"is Greatest"<<endl;
    }


}