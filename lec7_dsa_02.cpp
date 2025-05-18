#include <iostream>
#include <typeinfo>
using namespace std;
int reverseInteger(int x)
{
    string str = to_string(x);
    string revStr = "";
    if (str[0] == '-')
    {
        revStr += "-";
        for (int i = str.length() - 1; i > 0; i--)
        {
            revStr += str[i];
        }
    }
    else
    {
        for (int i = str.length() - 1; i >= 0; i--)
        {
            revStr += str[i];
        }
    }
    return stoi(revStr);
}
int main()
{
    int x = 0;
    int rev_x = reverseInteger(x);
    cout << "Original: " << x << endl;
    cout << "Reversed: " << rev_x << endl;
    return 0;
}