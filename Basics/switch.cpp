#include <iostream>
using namespace std;

int main()
{
    cout << "Running..." << endl;
    int day;
    cout << "Enter day" << endl;
    cin >> day;
    switch (day) // Integral values are valid here
    {
    case 1: // used to check the case
        cout << "Sunday" << endl;
        break; // used to end the switch statement
    case 2:
        cout << "Monday" << endl;
        break;
    case 3:
        cout << "Tuesday" << endl;
        break;
    case 4:
        cout << "Wednesday" << endl;
        break;
    case 5:
        cout << "Thursday" << endl;
        break;
    case 6:
        cout << "Friday" << endl;
        break;
    case 7:
        cout << "Saturday" << endl;
        break;
    default: // if any of the cases dosn't matches
        cout << "Invalid Day" << endl;
    }

}