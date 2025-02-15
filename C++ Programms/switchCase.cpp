// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    char ch = 'B';

    switch (ch)
    {
    case 'A':
    {
        cout << "this is case A" << endl;
        break;
    };
    case 'B':
    {
        cout << "this is case B" << endl;
        break;
    };
    case 'C':
    {
        cout << "this is case C" << endl;
        break;
    };
    default:
    {
        cout << "this is default case" << endl;
        break;
    };
    }

    return 0;
}