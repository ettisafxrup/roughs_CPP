#include <iostream>
using namespace std;

int recursiveFunction(int n) {
    if (n <= 0) {
        return 0;
    } else {
        return n + recursiveFunction(n - 1);
    }
}

int main() {
    int x = recursiveFunction(10);
    cout << "The sum of numbers from 1 to 5 is: " << x << endl;
    return 0;
}