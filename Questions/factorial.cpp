#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;
    long long int ans = 1;
    for(int i = 1;i<=n;i++){
        ans *=i;
    }
    cout<<"Factorial of "<<n<<" is "<<ans<<endl;
    
} 