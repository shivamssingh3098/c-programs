// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class FirstClass
{
public:
    int a;

private:
    int b = 100;

public:
    void fun()
    {
        cout << "inside the class : " << b << endl;
    }
};

int main()
{
    FirstClass obj;

    obj.a = 10;
    //  obj.b=100;
    obj.fun();
    cout << obj.a << endl;
    //   cout<< obj.fun();

    return 0;
}