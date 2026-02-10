#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    for(int i=1;i<=n;i++)
    {
        cout<<i;
    }
    cout<<endl;
    int k=n-1;
    for(int i = 2; i <= n - 1; i++)
    {
        cout << i;
        for(int space = 1; space <= n - 2; space++)
           {
             cout << " ";
           }
        
        cout<<k<<endl;
        k--;
    }
    for(int i=n;i>=1;i--)
    {
        cout<<i;
    }


    return 0;
}