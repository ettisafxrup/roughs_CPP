#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Default Initialization
    int x;

    // Value Initialization
    int y{};

    // Direct Initialization
    int z(5);

    // Copy Initialization
    int a = 5;

    // Direct List Initialization
    int b{2};
    vector<int> v{1, 2};

    // Aggregate Initialization
    struct p
    {
        int x, y;
    };
    p px{2, 3};

    // Uniform Initialization
    auto f = 10;
    auto g = int(10);

    // Dynamic Initialization
    int *dynamic = new int(5);
    cout << *dynamic << endl;
    delete dynamic;
}