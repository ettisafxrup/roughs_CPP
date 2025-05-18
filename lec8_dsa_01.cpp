#include <iostream>
using namespace std;

int main()
{
    int arr[] = {88, 24, 36, 28, 38, 72};
    int n = sizeof(arr) / sizeof(arr[0]);

    int smallest = arr[0];
    int biggest = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
        if (arr[i] > biggest)
            biggest = arr[i];
    }

    cout << "Smallest number: " << smallest << endl;
    cout << "Biggest number: " << biggest << endl;

    return 0;
}
