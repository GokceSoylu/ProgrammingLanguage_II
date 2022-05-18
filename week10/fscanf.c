/* An example for fscanf function from teacher's slide */
#include <stdio.h>
int main()
{
    int hesapNo, bakiye;
    char ad[20];
    FILE *p;
    if((p=fopen("musteri","r"))==NULL)
        printf("\nthe file could not be opened ");
    else
    {
        printf("\naccount no name balace\n");
        fscanf(p,"%d%s%d",&hesapNo,ad,&bakiye);
        while(!feof(p))
        {
            printf("\n%d%s%d",hesapNo,ad,bakiye);
            fscanf(p,"%d%s%d",&hesapNo,ad,&bakiye);
        }
        fclose(p);
    }
    return 0;
} 