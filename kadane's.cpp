#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int initSum = 0;
    int maxSum = INT_MIN;
    for (int elem : nums)
    {
        initSum += elem;
        maxSum = max(maxSum, initSum);
        // if (initSum < 0)
        //     initSum = 0;
    }

    return maxSum;
}

int main()
{
    // vector<int> vect = {1, 2, 3, 4, 5};
    vector<int> vect = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    // vector<int> vect = {-1};
    // vector<int> vect = {5, 4, -1, 7, 8};
    // vector<int> vect = {-1, -2, -3, -4, -5};

    cout << maxSubArray(vect) << endl;

    return 0;
}