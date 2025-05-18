#include <iostream>
using namespace std;

int reverse_array(int arr[], int sizeof_arr)
{
    int x;
    for (int i = 0; i < sizeof_arr; i++)
    {
        cout << "i: " << i << endl;
        for (int j = sizeof_arr - 1; j >= 0; j--)
        {
            cout << "j: " << j << endl;

            x = arr[i];
            arr[i] = arr[j];
            arr[j] = x;
        }
    }
    return 0;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sizeof_arr = sizeof(arr) / sizeof(arr[0]); // 5

    // calling reverse_array
    reverse_array(arr, sizeof_arr);

    for (int i = 0; i < sizeof_arr; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}