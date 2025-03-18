#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // for (string car : cars) {
    //   cout << car << "\n";
    // }

    cout << "cars[2] : " << cars[2] << endl;

    // Get the first element
    cout << cars.front() << endl;

    // Get the last element
    cout << cars.back() << endl;

    // Get the second element
    cout << cars.at(1) << endl;

    // Add an element at the beginning
    cars.push_front("Tesla");

    // Add an element at the end
    cars.push_back("VW");

    // Remove the first element
    // cars.pop_front();

    // // Remove the last element
    // cars.pop_back();

    cout << cars.size();

    for (int i = 0; i < cars.size(); i++)
    {
        cout << cars[i] << "\n";
    }

    return 0;
}
