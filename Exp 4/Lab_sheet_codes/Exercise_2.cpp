#include <bits/stdc++.h>
using namespace std;

int fact(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    else
    {
        return x * fact(x - 1);
    }
}

int main()
{
    stack<int> data;
    stack<int> result;

    for (int i = 0; i < 6; i++)
    {
        data.push(i);
    }

    for (int i = 0; i < 6; i++)
    {
        int temp = fact(i);
        result.push(temp);
    }

    while (!result.empty())
    {
        cout << "Factorial: " << data.top() << " = " << result.top() << endl;
        data.pop();
        result.pop();
    }
    return 0;
}