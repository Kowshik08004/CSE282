/*Write a C++ program to store and print the roll no., name, age, and marks
of a student using structures*/

#include <iostream>
using namespace std;

struct student
{
    int roll_num, age, marks;
    string name;
};

int main()
{
    struct student std1;

    cout << "Enter roll number: ";
    cin >> std1.roll_num;
    cout << "Enter name: ";
    cin >> std1.name;
    cout << "Enter age: ";
    cin >> std1.age;
    cout << "Enter marks: ";
    cin >> std1.marks;

    cout <<"Student's roll number: " << std1.roll_num <<endl;
    cout <<"Student's name: " << std1.name <<endl;
    cout <<"Student's age: " << std1.age <<endl;
    cout <<"Student's marks: " << std1.marks <<endl;

    return 0;
}
