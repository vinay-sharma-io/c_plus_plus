#include<iostream>
using namespace std;
void fun(int n){
    if(n==0) return; // base case 
    // cout<<n<<endl; // in reverse order from n
    fun(n-1);
    cout<<n<<endl; // in order from 1
}
int main(){
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    fun(n);
}