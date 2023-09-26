#include<iostream>
using namespace std;

int main(){
    char opr;
    int val1,val2;
    cout<<"Enter the Operation + - * / % "<<endl;
    cin>>opr;
    cout<<"Enter first and second Number "<<endl;
    cin>>val1>>val2;
    switch(opr){
        case '+':
            cout<<val1+val2<<endl;
            break;
        case '-':
            cout<<val1-val2<<endl;
            break;
        case '*':
            cout<<val1*val2<<endl;
            break;
        case '/':
            cout<<val1/val2<<endl;
            break;
        case '%':
            cout<<val1%val2<<endl;
            break;
        default:
            cout<<"Invalid Operation for now..."<<endl;
    }
}