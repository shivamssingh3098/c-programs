// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main()
{

    string str = "Programming";

    cout << "Length => " << str.length() << endl;
    cout << "value at index 2 => " << str[2] << endl;

    cout << "str.substr(3,4) => " << str.substr(7, 3) << endl;

    cout << "str.find(gram)=>" << str.find("ing") << endl;
    cout << "str.append( in C++)=>" << str.append(" in C++") << endl;
    cout << "FInal => " << str;

    return 0;
}