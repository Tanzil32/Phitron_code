#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) 
    {
        int n, m;
        cin >> n >> m;

        vector<int>a(n),b(m);
        for (int i=0;i<n;i++) 
        {
            cin>>a[i];
        }
        for (int i=0;i<m;i++)
         {
            cin>>b[i];
        }

        int k;
        cin>>k;

        int freqB[100005] = {0};   
        for (int i=0;i<m;i++)
           {
             freqB[b[i]]++;
           }         

        long long ans = 0;

        for (int i=0;i<n;i++) 
        {
            int tan = k-a[i];
            if (tan>=0&&tan<100005)
                {
                    ans += freqB[tan];
                }
        }

        cout<<ans;
    }
}
