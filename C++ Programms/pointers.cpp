// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void change(int *b)
{
    cout << *b << endl;
    *b = 1;
}

int main()
{
    int a = 10;
    int *ptr = &a;
    cout << a << endl;
    cout << "*ptr " << *ptr << endl;
    cout << "ptr " << ptr << endl;
    cout << "&a " << &a << endl;
    change(&a);
    cout << a << endl;

    return 0;
}