#include <stdio.h>
#include <stdlib.h>
int cevirme(int, int);
int main()
{
    int counter=0,number,n,i,taban,*p;
    printf("10 tabanında bir sayi giriniz lutfen ");
    scanf("%d",&number);
    printf("\nsayıyı hangi tabana cevirmek istersiniz? ");
    scanf("%d",&taban);
    n=number;
    while(number>0)
    {
        number=number/taban;
        counter++;
    }
    p=malloc(sizeof(int)*counter);
    i=counter;
    while(n>0)
    {
        i--;
        p[i]=n%taban;
        n=n/taban;
    }
    for(i=0;i<counter;i++)
        printf("%d ",p[i]);
    return 0;
}

