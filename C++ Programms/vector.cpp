// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vt = {1, 2, 3, 4, 5};
    int arr[] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
    {
        cout << vt[i] << endl;
    }
    cout << "values by using for each loop for vector" << endl;
    for (int i : vt)
    {
        cout << i << endl;
    }
    cout << "values by using for each loop for normal array" << endl;
    for (int i : arr)
    {
        cout << i << endl;
    }

    return 0;
}