// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class MyFirstClass
{
public:
    int age = 27;
    string name = "shivam singh";
};

class MySecondtClass
{
public:
    int age = 27;
    string name = "shivam singh";
};

int main()
{
    MyFirstClass obj1;
    MyFirstClass obj2;

    cout << "My name is : " << obj1.name << endl;
    cout << "My age is : " << obj1.age << endl;

    obj2.name = "Alok Verma";
    obj2.age = 28;
    cout << "My name is 2 : " << obj2.name << endl;
    cout << "My age is 2 : " << obj2.age << endl;

    cout << "My name is 1: " << obj1.name << endl;
    cout << "My age is 1  : " << obj1.age << endl;

    return 0;
}