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
        if (row%2==0)
        {
           printf("-");
        }
        else
        {
            printf("#");
        }
        printf("\n");
        str +=2;
    }
    
    for( row =n-1; row>=1 ; row--)
    {
        for(int i=n;i>row;i--)
        {
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
        if (row%2==0)
        {
           printf("-");
        }
        else
        {
            printf("#");
        }
        printf("\n");
        
    }

    return 0;
}
