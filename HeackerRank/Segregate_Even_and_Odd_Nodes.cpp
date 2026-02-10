#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    queue<int> q;
    while (n--)
    {
        int x;
        cin >> x;
        q.push(x);
    }
    queue<int> q_even;
    queue<int> q_odd;
    while (!q.empty())
    {
        if (q.front() % 2 == 0)
        {
            q_even.push(q.front());
            q.pop();
        }
        else if (q.front() != 0)
        {
            q_odd.push(q.front());
            q.pop();
        }
    }
    while (!q_even.empty())
    {
        cout<<q_even.front()<<" ";
        q_even.pop();
    }
    while (!q_odd.empty())
    {
        cout<<q_odd.front()<<" ";
        q_odd.pop();
    }
    
    

    return 0;
}