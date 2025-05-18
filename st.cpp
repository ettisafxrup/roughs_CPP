#include <iostream>
using namespace std;

int main()
{
    // Anonymous Struct
    struct
    {
        string Name;
        int Age;
    } Person;

    Person.Name = "Ettisaf Rup";
    Person.Age = 19;

    cout << "Name: " << Person.Name << "\n";
    cout << "Age: " << Person.Age << "\n";

    // Defined Struct
    struct PersonStruct
    {
        string Name;
        int Age;
    };
    PersonStruct person1;
    person1.Name = "Ettisaf Rup";
    person1.Age = 19;

    cout << "Name: " << person1.Name << "\n";
    cout << "Age: " << person1.Age << "\n";

    // Array of Structs
    PersonStruct persons[2];

    persons[0].Name = "Ettisaf Rup";
    persons[0].Age = 19;
    persons[1].Name = "John Doe";
    persons[1].Age = 25;
    cout << "Array of Structs:\n";
    for (int i = 0; i < 2; i++)
    {
        cout << "Name: " << persons[i].Name << "\n";
        cout << "Age: " << persons[i].Age << "\n";
    }

    return 0;
}