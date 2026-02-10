#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
    {
       int a,b;
       scanf("%d%d",&a,&b);
       int sum=0;
       if(a==0 && b%2==0)
       {
        printf("YES\n");
       }
       else if(b==0 && a%2==0)
       {
        printf("YES\n");
       }
       else if(a>0 && b>0)
       {
        sum +=(a*1)+(b*2);
        if(sum%2==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
       }
       else
       {
        printf("NO\n");
       }

    }
    

    return 0;
}