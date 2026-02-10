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
    int i=0,j=n-1;
    while (i<j)
    {
        int tem = a[j];
        a[j]=a[i];
        a[i]=tem;
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}