// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class A
{
protected:
    int salary;
};

class B : public A
{
public:
    int bonus;

    void setSalary(int x)
    {
        salary = x;
    };
    void getSalary()
    {
        cout << "Salary is : " << salary << endl;
    };
};

int main()
{
    // multiple inheritance
    B obj;
    obj.bonus = 100;
    cout << "Bonus is : " << obj.bonus << endl;
    obj.setSalary(10000);
    obj.getSalary();

    return 0;
}