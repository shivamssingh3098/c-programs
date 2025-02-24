// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {2, 4, 7, 5, 3};
    int temp = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}