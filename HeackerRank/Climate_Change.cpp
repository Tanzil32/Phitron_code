#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i=0;i<n;i++)
       {
         cin >> a[i];
       }

    long long total = 0;
    for(long long x : a)
        {
            total += x;
        }
    if(total % 2 != 0)
    {
        cout << 0;
        return 0;
    }

    long long sum = 0;
    int cont = 0;

    for(int i = 0; i < n-1; i++)   
    {
        sum += a[i];

        if(sum == total/2)
            cont++;
    }

    cout << cont;
}
