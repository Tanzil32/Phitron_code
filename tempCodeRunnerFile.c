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
    int min=a[0],max=a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
         if (a[i]>max)
        {
            max=a[i];
        }
    }
    /*int tem=min;
    min=max;
    max=tem;
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }*/
   printf("%d",min);
   printf("%d",max);
    
    
    
    return 0;
}