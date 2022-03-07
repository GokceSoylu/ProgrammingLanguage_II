/* kullanıcıda alınan bir dizinin varyansını bulur.  varyans --> degerlerin ortalamadan farkının kareleri toplamının eleman sayısına bolumudur */
#include <stdio.h>//çaçlısıyor ama pointer yok 
#include <stdlib.h>
#include <math.h>
int main()
{
    int i=0,n,dizi[100],sum=0,j,sum2=0;
    printf("\ndizinin elemanlarını giriniz lutfen (durdurmak için -1 giriniz lutfen\n");
    while(1)
    {
        scanf("%d",&dizi[i]);
        sum+=dizi[i];
        if(dizi[i]==-1)
            break;
        i++;
    }
    sum2=sum/i;
    for(j=0;j<i;j++)
    {
        sum2=pow(sum2-dizi[j],2);
    }
    printf("dizinin varyansı = %f",(float)sum2/i);
    return 0;
}