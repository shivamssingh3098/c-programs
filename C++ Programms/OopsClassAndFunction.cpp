
#include <iostream>
using namespace std;
class myClass
{
public:
    void inFun(int a1, int b1);
    void secondFun()
    {
        cout << "this is inside the class function" << endl;
    }
};
void myClass::inFun(int a, int b)
{
    cout << "sum of two number is : " << (a + b);
}

int main()
{
    myClass obj;

    obj.secondFun();
    obj.inFun(10, 20);
    return 0;
}