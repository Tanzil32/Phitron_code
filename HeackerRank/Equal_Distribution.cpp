#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x;
    cin>>n>>x;
    if(x==0)
    {
        cout<<0<<" "<<0;
        return 0;
    }
    cout<<x/n<<" "<<x%n;
    return 0;
}