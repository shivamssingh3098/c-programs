// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter student marks : ";
    cin >> n;

    if (n < 0 || n > 100)
    {
        cout << "invalid number";
    }
    else if (n >= 0 && n < 33)
    {
        cout << "Fail";
    }
    else if (n >= 33 && n < 50)
    {
        cout << "D Grade";
    }
    else if (n >= 50 && n < 60)
    {
        cout << "C Grade";
    }

    else if (n >= 60 && n < 80)
    {
        cout << "B Grade";
    }
    else if (n >= 80 && n < 90)
    {
        cout << "A Grade";
    }
    else if (n >= 90 && n <= 100)
    {
        cout << "A++ Grade";
    }

    return 0;
}