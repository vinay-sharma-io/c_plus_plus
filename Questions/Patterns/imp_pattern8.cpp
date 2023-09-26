// 1 
// A B 
// 1 2 3 
// A B C D 
// 1 2 3 4 5 
// A B C D E F 

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(i%2==0){
                cout<<(char)(j+64)<<" ";
            }
            else{
                cout<<j<<" ";
            }
        }
        cout << endl;
    }

    return 0;
}