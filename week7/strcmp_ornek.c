/* strcmp iiki stringi karsilastırır  iilk stringin ikinciden kısaysa <0 deger uzunsa >0 eger aynılarsa =0 deger dondurur */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int i;
    char m[10],n[10],k[10],*p;
    p=(char*)malloc(10*sizeof(char));
    strcpy(m,"Soylu");
    strcpy(n,"necmiye");
    strcpy(k,"nec");
    strcpy(p,m);
    i=strcmp(m,n);
    printf("\n%d",i);//<0
    i=strcmp(m,k);
    printf("\n%d",i);//>0
    i=strcmp(m,p);
    printf("\n%d",i);//=0
    return 0;
}