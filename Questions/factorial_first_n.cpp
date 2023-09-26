#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<sizeof(n);
    cout<<"Enter a number : "<<endl;
    cin>>n;
    for(int i = 1;i<=n;i++){
        long long int ans = 1;
        for(int j = 1;j<=i;j++){
            ans *=j;
        }
        cout<<"Factorial of "<<i<<" is "<<ans<<endl;
    }
    
} 