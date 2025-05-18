#include <iostream>
using namespace std;

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int getArrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << "Array Size: " << getArrayLength << "\n";

    // এখানে, i জাস্ট ওই ইন্ডেক্স নিচ্ছে, আর এক্সেস করতে হচ্ছে myNumbers[i]
    for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++)
    {
        cout << myNumbers[i] << " ";
    }

    // আর এখানে, i নিজেই array এর ভ্যালু নিচ্ছে, আর এক্সেস করতে হচ্ছে i
    for (int i : myNumbers)
    {
        cout << i << " ";
    }

    // 1D Array
    int arr1D[5] = {1, 2, 3, 4, 5};
    // 2D Array
    int arr2D[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    // 3D Array
    int arr3D[5][2][3] = {
        {
            {1, 2, 3},
            {4, 5, 6}
        },
        {
            {7, 8, 9},
            {10, 11, 12}
        },
        {
            {13, 14, 15},
            {16, 17, 18}
        },
        {
            {19, 20, 21},
            {22, 23, 24}
        },
        {
            {25, 26, 27},
            {28, 29, 30}
        }
    };

    
   
    cout << "3D Array: " << arr3D[1][0][1] << "\n";
    return 0;
}