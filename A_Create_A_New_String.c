#include<stdio.h>
#include<stdio.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    char t[1001];
    scanf("%s",t);
    int lens=strlen(s);
    int lent = strlen(t);
    printf("%d %d\n",lens,lent);
    printf("%s %s",s,t);
    return 0;
}