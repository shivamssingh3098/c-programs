// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{

    int i = 0;

    do
    {
        cout << "i => " << i << endl;

        int j = 0;

        do
        {
            cout << "j => " << j << endl;
            j++;
        } while (j <= 10);

        i++;
    } while (i <= 10);

    return 0;
}