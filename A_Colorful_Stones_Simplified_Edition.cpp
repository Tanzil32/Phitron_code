#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    int result=1,j=0;
    for(int i=0;i<s2.length();i++)
    {
        if(s2[i]==s1[j])
        {
            result++;
            j++;
        }
    }
    cout<<result;
    return 0;
}