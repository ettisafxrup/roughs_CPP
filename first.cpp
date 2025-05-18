#include <iostream>
#include <typeinfo>
using namespace std;

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x ;
   if(cin.fail()){
    cout << "Invalid input. Please enter a number." << endl;
   }else{ 
    cout << "You entered: " << x << endl;
   }
   
    return 0;
}