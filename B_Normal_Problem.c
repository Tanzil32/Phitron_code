#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char a[101],b[101];
        scanf("%s",a);
        strcpy(b,a);
        strrev(b);
        int i;
        for( i=0;i<strlen(b);i++)
        {
            if(b[i]=='p')
            {
                b[i]='q';
            }
            else if(b[i]=='q')
            {
                b[i]='p';
            }
        }
        printf("%s\n",b);
    }
    
    return 0;
}