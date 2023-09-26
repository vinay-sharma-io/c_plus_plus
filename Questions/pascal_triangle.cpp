//     1 
//    1 1 
//   1 2 1 
//  1 3 3 1 
// 1 4 6 4 1 

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
    cout << "Enter a number n" << endl;
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
}