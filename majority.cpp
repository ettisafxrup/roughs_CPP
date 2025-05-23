#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int majorityElement(vector<int> vect)
{
    sort(vect.begin(), vect.end());
    return vect[vect.size() / 2];
}

int main()
{

    return 0;
}