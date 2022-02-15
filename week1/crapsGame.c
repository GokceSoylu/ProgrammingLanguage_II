/* iki zar atılır ve gelen sayılar toplanır. ilk atışta 2,3,12 gelirse oyuncu kaybeder 7,11 gelirse kazanır. diğer durumlarda ilk atiıştaki toplam oyuncunun puani olur. oyuncu 7 gelmeden önce kendi puanının tutturmaya çalışır */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int zar (void);
int main()
{
    int puan,puan_old;
    srand(time(NULL));
    puan=zar();
    printf("\npuanınız %d\n",puan);
    if(puan==7  || puan==11)
    {
        printf("\nilk atista puanınız %d oldugu icin KAZANDINIZ!\n",puan);
        return 0;
    }
    if(puan==2 || puan==3 || puan==12)
    {
        printf("\nmalesef ilk atista puanınız %d geldigi icin kaybettiniz.\n",puan);
        return 0;
    }
    puan_old=puan;
    while(1)
    {    
        puan=zar();
        printf(" = %d\n",puan);
        if(puan==puan_old)
        {
            printf("\nTebrikler! kazandınız\n");
            return 0;
        }
        if(puan==7)
        {
            printf("\nuzgunum 7 sayısı geldigi icin kaybettiniz.\n");
            return 0;
        }
    }  
}
int zar(void)
{
    int i,n,sum=0;
    for(i=0;i<2;i++)
    {
        n=rand()%6+1;
        printf("%3d",n);
        sum+=n;
    }    
    return sum;
}