#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a, a+n, greater<long long>());
    long long mx=-1;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            mx=a[i];
            break;
        }
    }
     for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
       long long sum=a[i]+a[j];
        if(sum%2==0)
        {
           mx=max(mx,sum);
        }
       }
    }
   
    cout<<mx;
   


    return 0;
}