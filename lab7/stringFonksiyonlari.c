/* öğrendiğmiz tüm string fonksiyonlarını(strlen, strcpy, strcat, strcmp) içeeren bir c programı yazınız */
#include <stdio.h>
#include <string.h>
int main()
{
    char a[50],b[50],c[50],d[50],x;
    printf("metni giriniz lutfen");
    gets(a);
    printf("girdiginiz metnin uzunllugu %d\nikinci metni giriniz lutfen",strlen(a));
    gets(b);
    printf("ikinci metnin uzunlugu %d",strlen(b));
    strcpy(c,a);
    strcpy(d,b);
    strcat(a,b);
    printf("\nmetin1 %s",c);
    printf("\nmetin2 %s",d);
    printf("\n%s \ngoruldugu gibi ",a);
    x=strcmp(c,d);
    if(x==0)
        printf("metinler aynı");
    else
        printf("metinler aynı değil");
    return 0;
}//sıralamadan sonra bi kolay geldi :)