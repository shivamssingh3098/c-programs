// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{

    int i = 0;

    while (i <= 10)
    {
        cout << "i => " << i << endl;

        int j = 0;

        while (j <= 10)
        {
            cout << "j => " << j << endl;
            j++;
        }

        i++;
    }

    return 0;
}