// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int temp = 0;
    int arr[6] = {3, 4, 6, 2, 9, 10};

    int lastIndex = 5;

    for (int i = 0; i < 6; i++)
    {
        if (i == (lastIndex - i) || i > (lastIndex - i))
        {
            break;
        }
        temp = arr[i];
        arr[i] = arr[(lastIndex - i)];
        arr[(lastIndex - i)] = temp;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}