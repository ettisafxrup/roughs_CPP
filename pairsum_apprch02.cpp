// Pair Some with Two Pointer Approach ;)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> result;

void pairSum(vector<int> arr, int target)
{
    sort(arr.begin(), arr.end());

    int sum = 0;
    int i, j;
    i = 0;
    j = arr.size() - 1;
    while (sum != target)
    {
        sum = arr[i] + arr[j];
        if (sum > target)
        {
            j--;
        }
        else if (sum < target)
        {
            i++;
        }
        else if (sum == target)
        {
            result.push_back(i);
            result.push_back(j);
        }
        else
        {
            cout << "Unauthorized Target" << endl;
        }
    }
}

int main()
{
    vector<int> arr = {2, 7, 11, 16};
    pairSum(arr, 27);
    cout << result[0] << ", " << result[1] << endl;
    return 0;
}