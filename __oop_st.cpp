#include <iostream>
using namespace std;

class Hello
{
private:
    /* data */
public:
    Hello() { cout << "Hello constructor" << endl; }
    void Person(string p) { cout << "Hello " << p << endl; }
    ~Hello() { cout << "Hello destructor" << endl; }
    void bigFanBhaiya(string p);
};

void Hello::bigFanBhaiya(string p)
{
    cout << "Hello " << p << ", I'm your BIGFAN!!" << endl;
}

int main()
{

    Hello h1; // default constructor
    h1.Person("Rupbhaiya");
    h1.bigFanBhaiya("Rupbhaiya");

    return 0;
}