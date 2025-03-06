// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class A
{
public:
    void funA()
    {
        cout << "this is class A" << endl;
    };
};

class B
{
public:
    void funB()
    {
        cout << "this is class B" << endl;
    };
};

class C : public A, public B
{
public:
    void funC()
    {
        cout << "this is class C" << endl;
    };
};

int main()
{
    // multiple inheritance
    C obj;
    obj.funC();
    obj.funA();
    obj.funB();

    return 0;
}