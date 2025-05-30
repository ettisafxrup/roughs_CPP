#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;

    vector<int> heights(n);
    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    int result{};
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (abs(heights[j] - heights[i]) <= d)
            {
                result += 2;
            }
        }
    }

    cout << result << endl;
    return 0;
}