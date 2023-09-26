#include<iostream>
using namespace std;
// print array function
void printArray(int* arr,int size){
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
// largest number function
int largestVal(int* arr, int size){
    int largest = INT32_MIN;
    for(int i = 0;i<size;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    int arr[]={11,33,44,67,61,77,98};
    printArray(arr,7);
    cout << "Largest value is: "<<largestVal(arr,7)<<endl;;
}