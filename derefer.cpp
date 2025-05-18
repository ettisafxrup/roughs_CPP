#include <iostream>
using namespace std;

int main() {
    string food = "Pizza";  // Variable declaration
    string* ptr = &food;    // Pointer declaration

    cout << ptr << "\n";
    // cout << &food << "\n"; // Basically both of the lines are same

    cout << *ptr << "\n";


    return 0;
}