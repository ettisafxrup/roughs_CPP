#include <iostream>
#include <vector>
using namespace std;

int getWidthByHeights(vector<int> heights, int h_fence)
{
    int sizeof_heights = heights.size();
    int width{};
    for (int i = 0; i < sizeof_heights; i++)
    {
        if (heights[i] > h_fence)
        {
            width += 2;
        }
        else
        {
            width++;
        }
    }

    return width;
}

int main()
{
    int n, h_fence;
    cin >> n >> h_fence;

    vector<int> heights(n);

    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    cout << getWidthByHeights(heights, h_fence);

    return 0;
}