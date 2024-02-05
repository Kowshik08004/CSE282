#include <iostream>
using namespace std;

void display(struct person s);

struct person
{
    string name;
    int age;
    int mobileNo;
};

int main()
{
    struct person person1;

    getline(cin,person1.name);
    cin>>person1.age;
    cin>>person1.mobileNo;

    display(person1);            

    return 0;
}

void display(struct person s)
{
    cout<<s.name<<endl;
    cout<<s.age<<endl;
    cout<<s.mobileNo<<endl;
}