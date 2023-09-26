#include <iostream>
using namespace std;
// print array function
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
// smallest number function
int smallestVal(int *arr, int size)
{
    int smallest = INT16_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    return smallest;
}
int main()
{
    int arr[] = {11, 33, 44, 67, 61, 77, 98};
    printArray(arr, 7);
    cout << "Smallest value is: " << smallestVal(arr, 7) << endl;
    ;
}