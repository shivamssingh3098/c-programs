// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int n;
    int count = 0;

    cout << "Enter 5 values for array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter number for check" << endl;
    cin >> n;

    for (int i = 0; i < 5; i++)
    {
        if (n == arr[i])
        {
            count++;
            //  break;
        }
    }

    cout << "Number is available " << count << " times" << endl;

    return 0;
}