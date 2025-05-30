#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    if (n < 0)
    {
        x = 1 / x;
        n = -n;
    }

    int binForm = n;
    double ans = 1;

    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }

        x *= x;
        binForm /= 2;
    }

    return ans;
}

int main()
{
    // Input: x = 2.00000, n = 10

    double x = 1.00000;
    int n = -2147483648;
    cout << myPow(x, n) << '\n';

    return 0;
}