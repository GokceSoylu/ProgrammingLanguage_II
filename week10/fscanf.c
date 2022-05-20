/* An example for fscanf function from teacher's slide */
#include <stdio.h>
int main()
{
    struct student
    {
        int hesapNo, bakiye;
        char ad[20];
    };
    typedef struct student std;
    std a;
    int counter=1;
    FILE *p;
    p=fopen("musteri","r");
    printf("\naccount no name balace\n");
    fscanf(p,"%d\n%s\n%d",&a.hesapNo,a.ad,&a.bakiye);
    while(!feof(p))
    { 
        printf("\n%d\n%s\n%d",a.hesapNo,a.ad,a.bakiye);
        fscanf(p,"%d\n%s\n%d",&a.hesapNo,a.ad,&a.bakiye);
    }
    fclose(p);
    return 0;//🤯 bu pointer neden sürekli ilk elemanı yazdırıyor? nedeeeeen?
} 