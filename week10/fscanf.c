/* An example for fscanf function from teacher's slide */
#include <stdio.h>
int main()
{
    int hesapNo, bakiye, counter=0;
    char ad[20];
    FILE *p;
    p=fopen("musteri","r");
    printf("\naccount no name balace\n");
    fscanf(p,"%d\n%s\n%d",&hesapNo,ad,&bakiye);
    while(counter<3)
    { 
        counter++;
        printf("\n%d\n%s\n%d",hesapNo,ad,bakiye);
        fscanf(p,"%d\n%s\n%d",&hesapNo,ad,&bakiye);
    }
    fclose(p);
    return 0;//🤯 bu pointer neden sürekli ilk elemanı yazdırıyor? nedeeeeen?
} 