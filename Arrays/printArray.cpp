#include<iostream>
using namespace std;
void print_array(int* arr,int size){
    for(int i = 0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    cout<<"Running..."<<endl;
    int val[5]={1,2,4,5,7};
    print_array(val,5);
}