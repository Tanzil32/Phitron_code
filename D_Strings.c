#include<stdio.h>
#include<string.h>
int main()
{
    char s1[25],s2[11];
    scanf("%s",s1);
    scanf("%s",s2);
    char str3[11];
    strcpy(str3,s1);
    int len1= strlen(s1);
    int len2 = strlen(s2);
    
    strcat(s1,s2);
    printf("%d %d\n",len1,len2);
    printf("%s\n",s1);
    char temp=str3[0];
    str3[0]=s2[0];
    s2[0]=temp;
    printf("%s %s",str3,s2);
    return 0;
}