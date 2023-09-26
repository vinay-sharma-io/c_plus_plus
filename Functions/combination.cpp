#include <iostream>
using namespace std;
int fact(int n)
{
    int val = 1;
    for (int i = 1; i <= n; i++)
    {
        val = val * i;
    }
    return val;
}
int combination(int n, int r)
{
    int num = fact(n);
    int den = fact(r) * fact(n - r);
    return num / den;
}
int main()
{
    int n;
    int r;
    cout<<"Enter the value of n and r: "<<endl;
    cin>>n>>r;
    cout << combination(n, r) << endl;
}