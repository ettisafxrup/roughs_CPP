// swap the maximum and the minimum number from an array

#include <iostream>
using namespace std;

int swap_max_and_min(int arr[], int sizeof_array)
{
    int dummyvar;
    int MAX_INDEX = 0;
    int MIN_INDEX = 0;

    for (int i = 1; i < sizeof_array; i++)
    {
        if (arr[i] > arr[MAX_INDEX])
        {
            MAX_INDEX = i;
        }
        if (arr[i] < arr[MIN_INDEX])
        {
            MIN_INDEX = i;
        }
    }
    dummyvar = arr[MIN_INDEX];
    arr[MIN_INDEX] = arr[MAX_INDEX];
    arr[MAX_INDEX] = dummyvar;
}

int main()
{
    int arr[5] = {9, 3, 99, 68, 20};
    int sizeof_array = sizeof(arr) / sizeof(arr[0]);
    swap_max_and_min(arr, sizeof_array);

    for (int i = 0; i < sizeof_array; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}