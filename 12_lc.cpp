#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxArea(vector<int> &height)
{
    int maxWater{};
    int i = 0, j = height.size() - 1;
    while (j > i)
    {
        int result = (j - i) * min(height[i], height[j]);
        maxWater = max(maxWater, result);
        (height[i] > height[j]) ? j-- : i++;
    }

    return maxWater;
}
int main()
{
    vector<int> vect = {8, 7, 2, 1};
    // vector<int> vect = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    // vector<int> vect = {1, 1};

    cout << maxArea(vect) << '\n';
    return 0;
}