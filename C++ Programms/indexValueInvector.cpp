// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vc = {1, 2, 3, 4, 5};
    vector<int> vec = {1, 2, 3, 4, 5};

    int a;

    cout << "vec.front() => " << vec.front() << endl;
    cout << "vec.back() => " << vec.back() << endl;
    cout << "vec.at(3) => " << vec.at(3) << endl;

    return 0;
}