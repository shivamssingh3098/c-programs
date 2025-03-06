// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{

    try
    {
        int age = 20;

        if (age > 18)
        {
            cout << "You are eligible for vote.." << endl;
        }
        else
        {
            throw age;
        }
    }
    catch (int a)
    {
        cout << "Error throw : " << a;
    }

    return 0;
}