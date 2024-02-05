/*Write a C++ program to store roll no. (starting from 1), name and age of
5 students and then print the details of the student with roll no. 2.*/

#include <iostream>
using namespace std;

struct student
{
    int roll_num; 
    char name[50];  //string name doesn't work here. Why?
    int age;
};

int main()
{
    struct student std[5];

    cout << "Enter student's information: " << endl;

    for (int i = 1; i < 6; i++)
    {
        std[i].roll_num = i;
        cout << "Enter name: ";
        cin >> std[i].name;
        cout << "Enter age: ";
        cin >> std[i].age;
        cout << endl;
    }
    cout << "Roll no: " << std[2].roll_num << endl;
    cout << "Name: " << std[2].name << endl;
    cout << "Age: " << std[2].age << endl;
    return 0;
}