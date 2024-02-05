#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> demo;
    int sum = 0;

    demo.push(4);
    demo.push(9);
    demo.push(19);
    demo.push(34);
    demo.push(70);

    cout << "Stack elements: ";
    while (!demo.empty())
    {
        cout << " " << demo.top() << " ";
        sum += demo.top();
        demo.pop();
    }

    cout << "\nSum: " << sum <<endl;
    return 0;
}
