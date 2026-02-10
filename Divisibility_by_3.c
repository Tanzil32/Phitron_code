#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a;
    scanf("%lld",&a);
    if (a%3==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}