#include<stdio.h>
#include<string.h>
int main()
{
    char s1[25],s2[25];
    scanf("%s%s",s1,s2);
    int result= strcmp(s1,s2);
    if (result<=0)
    {
        printf("%s",s1);
    }
    else 
    {
        printf("%s",s2);
    }
    
    
    return 0;
}