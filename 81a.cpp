#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    string str;
    cin >> str;

    unordered_set<char> seen = {'a', 'a', 'c'};
    string result = "";

    // for (char c : str)
    // {
    //     if (!seen.count(c))
    //     {
    //         seen.insert(c);
    //         result += c;
    //     }
    // }

    // cout << result << endl;

    cout << seen.count('a') << endl;

    return 0;
}