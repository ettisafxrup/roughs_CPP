#include <iostream>
using namespace std;

int linear_search(int arr[], int sizeof_arr, int target_value)
{
    // an Fn for LinSearch
    for (int i = 0; i < sizeof_arr; i++)
        if (arr[i] == target_value)
            return i;
    return -1;
}

int main()
{
    int target_value = 89;
    int arr[5] = {23, 43, 54, 67, 89};
    int sizeof_arr = sizeof(arr) / sizeof(arr[0]);

    int x = linear_search(arr, sizeof_arr, target_value);
    cout << x << endl;
    return 0;
}