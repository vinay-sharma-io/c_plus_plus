#include<iostream>
using namespace std;

int main(){
    // integer array
    int arr[2] = {4,7};
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    // character array
    char alpha[] = {'a','b','c'};
    cout<<alpha[0]<<endl;
    cout<<alpha[2]<<endl;
    // string array
    string names[] = {"Vinay","Sohan","Gambhir"};
    cout<<names[0]<<endl;
    // print using loops
    cout<<"Names: "<<endl;
    for(int i = 0;i<3;i++){
        cout<<names[i]<<" ";
    }
    




}
