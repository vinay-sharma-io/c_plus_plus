#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    int temp = n;
    int digits=0;
    while(n>0){
        n = n/10;
        digits++;
    }
    cout<<"Total digits in "<<temp<<" is "<<digits<<endl;

}