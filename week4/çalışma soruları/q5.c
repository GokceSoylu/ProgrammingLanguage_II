#include <stdio.h>
#include <stdlib.h>
void scan(int[],int, int, int[]);
int main()
{
    int N, i, j, n, m, max_i, max_j, max=0, *matris, counter, filter[3][3]={0,1,0,0,1,0,1,1,1};
    printf("\nmatrisin boyutlarını giriniz ");
    scanf("%d",&N);
    matris=(int*)malloc(sizeof(int)*N*N);
    printf("\nmatrisi giriniz \n");
    for(i=0;i<N*N;i++) scanf("%d",&matris[i]);
    for(i=0;i<=N-3;i++)
        for(j=0;j<=N-3;j++)
        {
            counter=0;
            for(n=0;n<3;n++)
                for(m=0;m<3;m++) 
                    if(filter[n][m]==matris[i*N+j+n*N+m])
                        counter++;
            if(max<counter)
            {
                max_i=i;
                max_j=j;
                max=counter;
            }
        }
    printf("\nen benzer noktanın koordinatları %d %d\n",max_i+1,max_j+1);
    i=n=max_i*N+max_j;
    for(i=max_i;i<max_i+3;i++)
    {
        for(j=max_j;j<max_j+3;j++)
            printf("  %d",matris[i*N+j]);
        printf("\n");
    }
    return 0;
}