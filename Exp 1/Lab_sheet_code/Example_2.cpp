//Write a C++ program to access structure members using pointers.

#include <iostream>
using namespace std;

struct person
{
    string name;
    int age;
    int mobileNo;
};


int main()
{
    struct person person1, *personstr;
    personstr = &person1;

    cin >> personstr->name;
    cin >> personstr->age;
    cin >> personstr->mobileNo;

    cout << (*personstr).mobileNo <<endl;
    cout << (*personstr).age <<endl;
    cout << (*personstr).name <<endl;

    return 0;
}