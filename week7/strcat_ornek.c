/* strcat fonksiyonu strcpy fonksiyonuna çok benzer bariz fark strcat da stringin ilk içegi kaybolmaz yanına yazar birlestirir yani stringleri :) */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char a[20],b[20],*p;
    p=(char*)malloc(20*sizeof(char));
    strcpy(a,"Necmiye");
    printf("\n%s",a);
    strcpy(b,"Soylu");
    printf("\n%s",b);
    strcat(a,b);
    printf("\n%s",a);
    printf("\n%s",b);
    strcpy(p,a);
    printf("\n%s",p);
    return 0;
}