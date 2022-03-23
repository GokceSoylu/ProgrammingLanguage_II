/* kullanıcının girdigi nxn lik matrisin week6 calisma sorulari 4 teki sekilde isarteli olan kısımların(j cift olanlar işaretli) toplamını bulan program */
#include <stdio.h>
#include <stdlib.h>
int main()//poiter matris tanımladik ya :))
{
    int n,**p,i,j,sum=0;
    printf("\nmatrisin boyutu nedir? ");
    scanf("%d",&n);
    p=(int**)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        p[i]=(int*)malloc(n*sizeof(int));
    printf("\nmatrisin elemanlarını giriniz lutfen\n");
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        scanf("%d",&p[i][j]);
    printf("\nmatris\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",p[i][j]);
            if(j%2==0)
                sum+=p[i][j];
        }
        printf("\n");
    }   
    printf("\ntoplam = %d\n",sum);
    free(p);
    return 0;
}