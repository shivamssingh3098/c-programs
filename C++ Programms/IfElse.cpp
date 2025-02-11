// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number : ";
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n << " is Even number" << endl;
    }
    else
    {
        cout << n << " is odd number" << endl;
    }

    cout << "This is out of the if statement code ";

    //  cout<<"number is : "<<n;

    return 0;
}