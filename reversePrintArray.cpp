// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main()
{

    int arr[5] = {10, 20, 30, 40, 50};

    for (int i = 4; i >= 0; i--)
    {
        cout << "arr[" << i << "]" << arr[i] << endl;
    }

    return 0;
}