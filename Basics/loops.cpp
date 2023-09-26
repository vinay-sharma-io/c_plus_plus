#include <iostream>
using namespace std;
int main()
{
    // for loop
    for (int i = 0; i <= 15; i++)
    {
        cout << i << " ";
    }
    char i = 'a';
    int j = 'a';
    // while loop
    while (i <= 'z')
    {
        cout << i << endl;
        cout << "ASCII value of " << i << " is " << j << endl;
        i++;
        j++;
    }
    // using for loop
    for (; i <= 'z'; i++)
    {
        cout << i << endl;
        cout << "ASCII value of " << i << " is " << j << endl;
    }
    // do-while loop
    int k = 0;
    do
    {
        cout << k << endl;
        k++;
    } while (k <= 7); // if condition is false at least one iteration will execute
}