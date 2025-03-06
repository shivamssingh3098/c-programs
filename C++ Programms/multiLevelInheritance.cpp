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

class BaseClass1 : public ParentClass
{
public:
    int b = 100;
    void baseClass1Fun()
    {
        cout << "this is base class 1 " << endl;
    }
};

class BaseClass2 : public BaseClass1
{
public:
    void baseClass2Fun()
    {
        cout << "this is  base class 2 " << endl;
    }
};

int main()
{
    BaseClass2 obj;
    obj.parentClassFun();
    obj.baseClass1Fun();
    obj.baseClass2Fun();

    return 0;
}