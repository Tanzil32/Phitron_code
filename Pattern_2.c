#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int row=1;row<=n;row++)
    {
        for(int i=n;i>row;i--)
        {
            printf(" ");
        }
        int pat =row;
        for(int col=1;col<=row;col++)
        {
            printf("%d",pat);
            pat--;
            
        }
        printf("\n");
    }
    return 0;
}