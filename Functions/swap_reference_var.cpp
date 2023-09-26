#include<iostream>
using namespace std;
void swap(int& a,int&b){
    a = a^b;
    b = a^b;
    a = a^b;
}
int main(){
    int a = 34;
    int b = 89;
    cout<<"Before swapping "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After swapping "<<a<<" "<<b<<endl;
}