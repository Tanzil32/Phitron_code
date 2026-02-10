#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    if (a[k-1]==0)
    {
        a[k-1]=1;
    }
    else if (a[k-1]==1)
    {
       a[k-1]=0;
    }
    
    for (int i = 0; i < n; i++)
    {
        
        printf("%d ",a[i]);
    }
    
    
    
    return 0;
}