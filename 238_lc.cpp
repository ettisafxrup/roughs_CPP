#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
    vector<int> result(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        int product{1};
        for (int j = 0; j < nums.size(); j++)
        {
            if (i == j)
            {
                continue;
            }
            product *= nums[j];
        }
        result[i] = product;
    }

    return result;
}

int main()
{
    vector<int> vect = {1, 2, 3, 4};
    productExceptSelf(vect);
    return 0;
}