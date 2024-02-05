#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> stack1;

    for (int i = 0; i < 5; i++) //push operation
    {
        stack1.push(i);
    }

    while (!stack1.empty()) //printing the values
    {
        cout << stack1.top() << " "; //accessing the values by top operation
        stack1.pop(); //pop operation
    }
    return 0;
}