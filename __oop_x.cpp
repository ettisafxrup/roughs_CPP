#include <iostream>
using namespace std;

class Test
{
public:
    int x;
    int y;
};

int main()
{
    Test t1;
    t1.x = 10;
    t1.y = 20;
    cout << "x: " << t1.x << ", y: " << t1.y << endl;
    return 0;
}