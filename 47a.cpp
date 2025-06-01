#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // n * (n+1) / 2
    int x = 1;

    while (true)
    {
        if (n == 0)
        {
            cout << "NO";
            break;
        }

        int triangular = (x * (x + 1)) / 2;

        if (triangular == n)
        {
            cout << "YES" << endl;
            break;
        }
        else if (triangular < n)
        {
            x++;
            continue;
        }
        else if (triangular > n)
        {
            cout << "NO" << endl;
            break;
        }
    }

    return 0;
}