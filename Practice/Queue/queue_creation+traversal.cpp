#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> demo;

    for (int i = 0; i < 5; i++) //push operation
    {
        demo.push(i);
    }

    while (!demo.empty()) //printing the values
    {
        cout << demo.front() << " "; //accessing the values by front operation
        demo.pop(); //pop operation
    }
    return 0;
}