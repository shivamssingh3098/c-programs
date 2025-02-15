// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    if (n > 0 && n < 31) // 1,2,3----50
    {
        if (n >= 1 && n <= 10)
        {
            cout << "Number is in between 1-10";
        }
        else if (n > 10 && n <= 20)
        {
            cout << "Number is in between 11-20";
        }
        else if (n > 20 && n <= 30)
        {
            cout << "Number is in between 21-30";
        }
    }
    else
    {
        cout << "Number is invalid";
    }

    return 0;
}