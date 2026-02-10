#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int row,col;
    int str=1;
    for ( row =1; row<=n ; row++)
    {
        for(int i=n;i>row;i--)
        {
            printf(" ");
        }
        for(col=1;col<=str;col++)
        {
            printf("*");
        }
        printf("\n");
        str +=2;
    }

    return 0;
}
