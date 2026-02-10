#include<stdio.h>
#include<string.h>
int main()
{
    char s1[1001];
    scanf("%s",s1);
    char s2[1001];
     int len = strlen(s1);
    for (int i = 0; i < len; i++)
    {
        s2[i] = s1[len - i - 1];
    }
    s2[len] = '\0';  
    int result = strcmp(s1,s2);
    if (result==0)
    {
       printf("YES"); 
    }
    else 
    {
        printf("NO");
        
        
    }
    
    return 0;
}