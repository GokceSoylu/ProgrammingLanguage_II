#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
{
    char a[10],b[10],*p;
    p=(char*)malloc(20*sizeof(char));//eger hafizadan bu sekilde yer acmassak
    strcpy(a,"Necmiye");
    printf("\n%s",a);
    strcpy(b,"Soylu");
    printf("\n%s",b);
    strcpy(p,"necmiye soylu");//burada hata veriri cunku bir metin aktarıyosuz, adres aktarmıyoruz dizi gibi olmalı.
    printf("\n%s",p);
    strcpy(a,b);
    printf("\n%s",a);//soylu
    strcpy(p,a);
    printf("\n%s",p);
    printf("\n%s",b);
    return 0;
}
//zaten mevzuyu anlamışsındır strcpy alır bir metni yada stringi baska bir sytingin içine aktarir 
//bu islem esnasında aktarılanda degisiklik olmazken içine aktardıgımız stringin onceki içeriği kaybolur!