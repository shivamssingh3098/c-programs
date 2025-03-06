// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class ParentClass
{
public:
    int a = 10;

    void parentClassFun()
    {
        cout << "Parent class function" << endl;
    }
};

class BaseClass : public ParentClass
{
public:
    int b = 100;
    void baseClass()
    {
        cout << "this is base class " << endl;
    }
};

int main()
{
    BaseClass obj;

    obj.baseClass();
    obj.parentClassFun();

    return 0;
}