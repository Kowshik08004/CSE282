/* Enter the marks of 5 students in Chemistry, Mathematics, and Physics
(each out of 100) using a structure named Marks having elements roll no.,
name, chem_marks, maths_marks, and phy_marks and then display the
percentage of each student. */

#include <iostream>
using namespace std;

struct Marks
{
    float roll_num, chem_marks, math_marks, phy_marks;
    char name[50];
};

int main()
{
    struct Marks std[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter Roll number: ";
        cin >> std[i].roll_num;
        cout << "Enter name: ";
        cin >> std[i].name;
        cout << "Enter chemistry marks: ";
        cin >> std[i].chem_marks;
        cout << "Enter math marks: ";
        cin >> std[i].math_marks;
        cout << "Enter physics marks: ";
        cin >> std[i].phy_marks;
    }

    for (int i = 0; i < 5; i++)
    {
        float percentage;
        percentage = ((std[i].chem_marks + std[i].math_marks + std[i].phy_marks) / 300.0) * 100.0;
        cout << "Roll no: " << i + 1 << endl;
        cout << "Percentage: " << percentage << endl;
    }

    return 0;
}