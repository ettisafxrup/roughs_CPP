#include <iostream>
#include <chrono>
using namespace std;

int main()

{
    auto start = chrono::high_resolution_clock::now();

    for (int i = 0; i < 100; i++)
    {
        cout << "Hello " << i << endl;
    }

    auto end = chrono::high_resolution_clock::now();
    // Duration
    chrono::duration<double, std::milli> duration = end - start;
    cout << "Execution time: " << duration.count() << " ms" << std::endl;
    return 0;
}