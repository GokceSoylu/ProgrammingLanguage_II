/* iki zar atılır ve gelen sayılar toplanır. ilk atışta 2,3,12 gelirse oyuncu kaybeder 7,11 gelirse kazanır. diğer durumlarda ilk atiıştaki toplam oyuncunun puani olur. oyuncu 7 gelmeden önce kendi puanının tutturmaya çalışır */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int puan=0,puan_old,i,zar;
    srand(time(NULL));
    for(i=0;i<2;i++)
    {
        zar=rand()%6+1;
        printf("%3d",zar);
        puan+=zar;
    }
    printf("  puanınız= %d\n",puan);
    if(puan==7|| puan==11)
    {
        printf("\ntebrikler KAZANDINIZ!");
        return 0;
    }
    if(puan==2 || puan==3 || puan==12)
    {
        printf("\nmalesef kaybettiniz");
        return 0;
    }
    while(1)
    {
        puan=0;
        for(i=0;i<2;i++)
        {
            zar=rand()%6+1;
            printf("%3d",zar);
            puan+=zar;
        }
        printf(" = %d\n",puan);
        if(puan==puan_old)
        {
            printf("\ntebrikler KAZANDINIZ");
            return 0;
        }
        if(puan==7)
        {
            printf("\nmalesef kaybettiniz");
            return 0;
        }
    }
}