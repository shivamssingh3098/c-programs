// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{
    //  cout<<"Enter a number to print "<< endl;
    int a = 25;

    if (a > 0 && a < 10)
    {

        cout << "this number is between 0 to 10";
    }
    else if (a > 10 && a < 20)
    {
        cout << "this number is between 10 to 20";
    }
    else if (a > 20 && a < 30)
    {
        cout << "this number is between 20 to 30";
    }
    else
    {
        cout << "Number is invalid";
    }

    //  cout <<"The number is " << sum << endl;

    return 0;
}