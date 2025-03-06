// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class A
{

public:
    void nameFun()
    {
        cout << "My name is A" << endl;
    };
};

class B : public A
{
public:
    void nameFun()
    {
        cout << "My name is B" << endl;
    };
};

class C : public A
{
public:
    void nameFun()
    {
        cout << "My name is C" << endl;
    };
};

int main()
{
    // multiple inheritance
    A objA;
    B objB;
    C objC;

    objA.nameFun();
    objB.nameFun();
    objC.nameFun();

    return 0;
}