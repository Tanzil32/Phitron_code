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
    int count=0;
    while (i<j)
    {
        if (a[i]==a[j])
        {
           count=1; 
        }
        else 
        {
            count=0;
            break;
        }
        i++;
        j--;
        
    }
    if(count==1)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    
    return 0;
}