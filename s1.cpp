// WAF to sum and product all the numbers from an array
#include <iostream>
using namespace std;

int sumOfArray(int arr[], int sizeof_array)
{
    int sum_of_array = 0;
    for (int i = 0; i < sizeof_array; i++)
        sum_of_array += arr[i];
    return sum_of_array;
}
int productOfArray(int arr[], int sizeof_array)
{
    int product_of_array = 1;
    for (int i = 0; i < sizeof_array; i++)
        product_of_array *= arr[i];
    return product_of_array;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int sizeof_array = sizeof(arr) / sizeof(arr[0]);

    cout << sumOfArray(arr, sizeof_array) << endl;
    cout << productOfArray(arr, sizeof_array) << endl;
    return 0;
}