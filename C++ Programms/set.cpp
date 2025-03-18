#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<string> cars = {"Volvo", "BMW", "Ford", "Mazda", "Mazda"};
    set<int> arr = {1, 4, 6, 2, 4, 6, 5, 7, 74, 0};

    for (string car : cars)
    {
        cout << car << "\n";
    }

    // sorting
    for (int i : arr)
    {
        cout << i << "\n";
    }

    // Sort elements in a set in descending order
    set<int, greater<int>> numbers = {1, 7, 3, 2, 5, 9};
    // Print the elements
    for (int num : numbers)
    {
        cout << num << "\n";
    }
    // Add new elements
    cars.insert("Tesla");
    cars.insert("VW");
    cars.insert("Toyota");
    cars.insert("Audi");

    // Remove elements
    cars.erase("Volvo");
    cars.erase("Mazda");

    for (string car : cars)
    {
        cout << car << "\n";
    }
    return 0;
}
