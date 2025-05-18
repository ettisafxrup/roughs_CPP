#include <iostream>
using namespace std;

int main() {

    enum Color { Red = 98, Green, Blue };
    
    // bydefault: Red = 0, Green = 1, Blue = 2
    // but we can assign any value to the first element
    // and the rest will be incremented by 1
    // os, if Red = 98, then Green = 99, Blue = 100

    cout << "Red: " << Red << "\n";
    cout << "Green: " << Green << "\n";
    cout << "Blue: " << Blue << "\n";
    
    return 0;
}