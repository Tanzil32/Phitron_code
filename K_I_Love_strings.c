#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
       char s1[51],s2[51];
       scanf("%s%s",s1,s2);
       int maxlen = (strlen(s1)>strlen(s2))?strlen(s1):strlen(s2);
       for (int i = 0; i<maxlen; i++)
       {
        if (i < strlen(s1)) printf("%c", s1[i]);
            if (i < strlen(s2)) printf("%c", s2[i]);
       }
       printf("\n");
       
    }
    
    return 0;
}