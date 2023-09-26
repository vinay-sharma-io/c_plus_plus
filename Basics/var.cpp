#include<iostream>
using namespace std;

int main(){
    // type variable_name = value;
    int var = 45; // allowed
    int var1 = 65; // allowed
    // int 1var; // not allowed
    int $var = 4; 
    cout<<$var;
    // int var# = 34; // not allowed
    cout<<var;
    cout<<endl;
    cout<<var1<<endl;
    int a,b,c;
    a = b = c = 45;
    cout<<a<<" "<<b<<" "<<c<<endl;

    // constants 
    const int myFavNumber = 45;
    // myFavNumber = 56; // constants can't be changed
    const float pi = 3.14;
    cout<<myFavNumber<<endl;
    cout<<pi<<endl;


    return 0;

}