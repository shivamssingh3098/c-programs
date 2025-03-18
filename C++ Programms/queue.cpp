#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> qu;

    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);

    cout << "first or oldest : " << qu.front() << endl;
    cout << "last or newest : " << qu.back() << endl;
    qu.pop();
    cout << qu.front();

    return 0;
}
