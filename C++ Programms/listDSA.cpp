// Online C++ compiler to run C++ program online
#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> li = {10, 20, 30, 40, 50};
    list<int> blank = {};

    for (int i : li)
    {
        cout << i << endl;
    }

    // cout<< li.front() << endl;
    // cout<< li.back() << endl;

    //     li.front()=1;
    //     li.back()=5;
    // cout<< li.front() << endl;
    // cout<< li.back() << endl;

    li.push_front(100);
    li.push_back(1000);

    cout << "After Push back and front" << endl;

    for (int i : li)
    {
        cout << i << endl;
    }

    li.pop_front();
    li.pop_back();
    cout << "After pop back and fron" << endl;

    for (int i : li)
    {
        cout << i << endl;
    }

    cout << "Empty Funtion => " << blank.empty();

    return 0;
}