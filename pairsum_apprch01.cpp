#include <iostream>
#include <vector>

using namespace std;

vector<int> result = {};

void pairSumArr(vector<int> vect, int target)
{
    int size = vect.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (vect[i] + vect[j] == target)
            {
                result.push_back(vect[i]);
                result.push_back(vect[j]);
            }
        }
    }
}

int main()
{
    vector<int> vect = {2, 7, 3, 4};
    int target = 9;
    pairSumArr(vect, 9);
    cout << "{" << result[0] << ", " << result[1] << "}" << endl;
    return 0;
}