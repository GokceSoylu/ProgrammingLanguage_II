#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p[3],i,j;
    *p=(int*)malloc(sizeof(int)*3);
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&p[i][j]);
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",p[i][j]);
        printf("\n");
    }    
    return 0;
}