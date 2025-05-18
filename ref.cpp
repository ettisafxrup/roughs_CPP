#include <iostream>
using namespace std;

int main() {
    string name = "Rup";
    string &rup = name; // Reference to name

    cout << "Name: " << name << "\n"; // Output: Rup
    cout << "Rup: " << rup << "\n"; // Output: Rup

    
    return 0;
}