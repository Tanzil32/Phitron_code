#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        a[0][i]=1;
        a[i][0]=1;
    }
    for(int row=1;row<n;row++)
    {
        for(int col=1;col<n;col++)
        {
            a[row][col]=a[row-1][col]+a[row][col-1];
        }
    }
    cout<<a[n-1][n-1];
    return 0;
}