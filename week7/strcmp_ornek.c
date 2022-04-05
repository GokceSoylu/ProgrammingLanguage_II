/* strcmp iki stringi karsilastırır */
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
    strcpy(k,"kbu");
    strcpy(p,m);
    i=strcmp(m,n);
    printf("\n%d",i);//<0
    i=strcmp(m,k);
    printf("\n%d",i);//>0
    i=strcmp(m,p);
    printf("\n%d",i);//=0
    return 0;
}//tek tek ilk elemanları alır ve ASCII degerlerine gore esit mi diye bakr eger ise sorun yok diger elemana gecer ta ki farklı olana yada
//null olana kadar devam eder bunlardan biri olunca str1[i]-str2[i] nin int degerini dondurur