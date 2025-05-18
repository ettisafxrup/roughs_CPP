#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;
    
    if ((num >> 2)%2 == 0){
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}