#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vect;

    vect.push_back(0);
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    vect.push_back(4);
    vect.push_back(4);
    vect.push_back(4);
    vect.push_back(4);

    cout << vect.size()
         << endl;
    cout << vect.capacity()
         << endl;

    return 0;
}