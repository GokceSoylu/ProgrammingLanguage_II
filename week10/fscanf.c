/* An example for fscanf function from teacher's slide */
#include <stdio.h>
int main()
{
    int hesapNo, bakiye;
    char ad[20];
    FILE *p;
    p=fopen("musteri","r");
    printf("\naccount no name balace\n");
    while(!feof(p))
    { 
        fscanf(p,"%d%s%d",&hesapNo,ad,&bakiye);
        printf("\n%d\n%s\n%d",hesapNo,ad,bakiye);
    }
    fclose(p);
    return 0;
} 