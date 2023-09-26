#include<iostream>
using namespace std;

int main(){
    // continue
    for(int i = 0;i<=8;i++){
            if(i==4)
            continue; // skip this iteration
        cout<<i<<" ";
    }
    cout<<endl;
    // break
    for(int i = 0;i<=8;i++){
            if(i==4)
            break; // break and come out of the loop
        cout<<i<<" ";
    }
    cout<<endl;
    // even numbers from one to hundred
    for(int k =1;k<=100;k++){
        if(k%2==0){
            cout<<k<<endl;
        }
        else{
            continue;
        }
    }
    // odd numbers from one to hundred
    for(int k =1;k<=100;k++){
        if(k%2!=0){
            cout<<k<<endl;
        }
        else{
            continue;
        }
    }
}