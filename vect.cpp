#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> x = {1, 2, 3, 4, 5};
    vector<char> y = {'A', 'B', 'C', 'D', 'E'};

    for (int x : x)
    {
        cout << x << endl;
    }
    for (char y : y)
    {
        cout << y << endl;
    }

    return 0;
}