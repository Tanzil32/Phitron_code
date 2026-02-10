#include<stdio.h>
void print()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[i],min=a[i];
    for(int i=0;i<n;i++)
    {
       if(max<a[i])
       {
        max=a[i];
       }
       if(min>a[i])
       {
        min=a[i];
       }
    }
    printf("%d %d",min,max);

}
int main()
{
    print();
    
    return 0;
}