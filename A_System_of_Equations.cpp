#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int cont=0;
    for(int i=0;i*i<=n;i++)
    {
        for(int j=0;j*j<=m;j++)
    {
        if((i*i+j==n)&&(i+j*j==m))
        {
            cont++;
        }
    }
    }
    cout<<cont;
    return 0;
}