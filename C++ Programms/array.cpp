// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void sum(int a[], int b[], int c[])
{
    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i] + b[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "a+b => " << c[i] << endl;
    }
}

void sub(int a[], int b[], int c[])
{
    for (int i = 0; i < 5; i++)
    {
        c[i] = a[i] - b[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout << "a-b => " << c[i] << endl;
    }
}

int main()
{

    int arr1[5] = {1, 2, 3, 4, 5};
    int arr2[5] = {10, 20, 30, 40, 50};
    int arr3[5];

    int arr11[5] = {15, 27, 39, 04, 55};
    int arr22[5] = {120, 204, 370, 409, 500};
    int arr33[5];

    // arr1+arr2
    cout << "sum for first" << endl;
    sum(arr1, arr2, arr3);
    cout << "Subtraction for first" << endl;
    sub(arr2, arr1, arr3);
    cout << "sum for second" << endl;
    sum(arr11, arr22, arr33);
    cout << "Subtraction for second" << endl;
    sub(arr22, arr11, arr33);

    return 0;
}