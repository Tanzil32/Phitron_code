#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
       long long a,b,c;
       cin>>a>>b>>c;
       long long A = a-1;
       long long B = abs(c-b)+(c-1);
       if(A<B)
       {
        cout<<1<<endl;
       }
       else if(A>B)
       {
        cout<<2<<endl;
       }
       else
       {
        cout<<3<<endl;
       }
    }
    
    return 0;
}