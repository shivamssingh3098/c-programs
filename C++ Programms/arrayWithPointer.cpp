// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// void change(int *b){
//     cout<<*b<<endl;
//     *b=1;
// }

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i) << endl;
    }
    cout << "Default way of accesing array" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}