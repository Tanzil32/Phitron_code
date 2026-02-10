#include<stdio.h>
int main()
{
    char s1[1001],s2[1001];
    scanf("%s%s",s1,s2);
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%s",s1);
   for (int i = a; i <=b; i++)
   {
    printf("%c",s2[i]);
   }
   printf("\n");
    
    return 0;
}