#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int m;
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
        if(i%3==0||i%5==0)
    {
        printf("Yes\n");
    }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
