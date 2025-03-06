// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{

    try
    {
        int age = 2;

        if (age > 18)
        {
            cout << "You are eligible for vote.." << endl;
        }
        else
        {
            throw 'a';
        }
    }
    catch (...)
    {
        cout << "Error throw : ";
    }

    return 0;
}