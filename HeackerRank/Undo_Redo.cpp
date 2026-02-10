#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    string s;
    stack<char> typed, redo;

    for (int i=0;i<n;i++)
     {
        cin>>s;
        if (s == "TYPE") {
            char x;
            cin >> x;
            typed.push(x);
            while (!redo.empty()) 
            redo.pop();
        }
        else if (s == "UNDO") 
        {
            if (!typed.empty()) 
            {
                char x = typed.top();
                typed.pop();
                redo.push(x);
            }
        }
        else if (s == "REDO") 
        {
            if (!redo.empty()) 
            {
                char x = redo.top();
                redo.pop();
                typed.push(x);
            }
        }
    }
    string result;
    while (!typed.empty())
     {
        result += typed.top();
        typed.pop();
    }

    reverse(result.begin(), result.end());
    cout << result << endl;
    return 0;
}
