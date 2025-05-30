#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int arrSize;
    cin >> arrSize;

    vector<int> arr(arrSize);

    for (int i = 0; i < arrSize; i++)
    {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());
    set<int> filtered_set(arr.begin(), arr.end());
    vector<int> filtered_arr(filtered_set.begin(), filtered_set.end());

    if (filtered_arr.size() > 1)
    {
        cout << filtered_arr[1];
    }
    else
    {
        cout << "NO";
    }

    return 0;
}