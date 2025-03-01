// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 1, 2, 1, 2, 4, 7};
    int ans;

    for (int i = 0; i < 7; i++)
    {
        ans = ans ^ arr[i];
    }
    cout << "Uniqu value is " << ans;

    return 0;
}