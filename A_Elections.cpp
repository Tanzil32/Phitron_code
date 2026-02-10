#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long a,b,c;
        cin >> a >> b >> c;

        long long mx = max({a,b,c});

        int cnt = (a==mx) + (b==mx) + (c==mx);

        if(cnt > 1)   
        {
            cout << mx-a+1 << " "
                 << mx-b+1 << " "
                 << mx-c+1 << "\n";
        }
        else
        {
            cout << (a==mx?0:mx-a+1) << " "
                 << (b==mx?0:mx-b+1) << " "
                 << (c==mx?0:mx-c+1) << "\n";
        }
    }
}
