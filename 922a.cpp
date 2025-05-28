#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    string result;

    if (x == 0 && y == 1)
    {
        result = "Yes";
    }
    else if (y == 0)
    {
        result = "No";
    }
    else if (y > 1)
    {
        int targ_x = x - (y - 1);
        if (targ_x % 2 == 0 && targ_x >= 0)
        {
            result = "Yes";
        }
        else
        {
            result = "No";
        }
    }
    else
    {
        result = "No";
    }

    cout << result << endl;
    return 0;
}