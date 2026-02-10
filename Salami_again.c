#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i <n; i++)
    {
       scanf("%d",&a[i]);
    }
    int max=a[0];
    for (int i = 0; i <n; i++)
    {
       if (max<a[i])
       {
        max=a[i];
       }
    }
    for (int i = 0; i <n; i++)
    {
       int diff = max - a[i];
       printf("%d ",diff);
    }
    
    return 0;
}