#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, -3, -4, -5};
    int n = 5;

    int maximum_sum = 0;

    for (int start = 0; start < n; start++)
    {
        int init_sum = 0;
        for (int end = start; end < n; end++)
        {
            init_sum += arr[end];
            maximum_sum = max(init_sum, maximum_sum);
        }
    }

    cout << maximum_sum << endl;
    // 1 12 123 1234 12345
    // 2 23 234 2345
    // 3 34 345
    // 4 45
    // 5

    return 0;
}