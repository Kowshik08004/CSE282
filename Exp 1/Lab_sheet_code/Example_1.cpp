//Write a C++ to define a structure.

#include <iostream>
using namespace std;

struct person
{
    string name;
    int cityNo;
    float salary;
} person1;

int main()
{

    struct person person2;

    cout << "Enter name: ";
    cin >> person1.name;
    cout << "Enter city no: ";
    cin >> person1.cityNo;
    cout << "Enter salary: ";
    cin >> person1.salary;


    cout << "Enter name: ";
    cin >> person2.name;
    cout << "Enter city no: ";
    cin >> person2.cityNo;
    cout << "Enter salary: ";
    cin >> person2.salary;

    cout << endl;
    cout << "Name: ";
    cout << person1.name << endl;
    cout << "City no: ";
    cout << person1.cityNo << endl;
    cout << "Salary: ";
    cout << person1.salary << endl;

    cout << "Name: ";
    cout << person2.name << endl;
    cout << "City no: ";
    cout << person2.cityNo << endl;
    cout << "Salary: ";
    cout << person2.salary << endl;

    return 0;
}
