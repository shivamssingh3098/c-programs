// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> vc = {1, 2, 3, 4, 5};
    vector<int> vec = {1, 2, 3, 4, 5};

    int a;

    cout << "element in vector - ";
    // for(int i =0; i<5; i++)
    // {
    //     // cin>>a;
    //   vec.push_back(a);
    // }
    for (int value : vec)
    {
        cout << value << endl;
    }
    vec.pop_back();
    vec.pop_back();

    cout << "printing values after pop" << endl;
    for (int value : vec)
    {
        cout << value << endl;
    }

    return 0;
}