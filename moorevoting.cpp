#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int> arr)
{
    int freq = 0, ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (freq == 0)
        {
            ans = arr[i];
        }

        if (ans == arr[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 1, 2, 2, 2};
    cout << majorityElement(arr) << endl;

    return 0;
}