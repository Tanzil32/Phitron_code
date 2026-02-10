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
    int minidex=0,maxindex=0;
    for (int i = 1; i < n; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
            minidex=i;
        }
         if (a[i]>max)
        {
            max=a[i];
            maxindex=i;
        }
    }
    int tem=a[minidex];
    a[minidex]=a[maxindex];;
    a[maxindex]=tem;
    
    for (int i = 0; i < n; i++)
    {
        
        printf("%d ",a[i]);
    }
     
    return 0;
}