/* araya bosluk koyarak iki stringi birleştiren strcat fonksiyonu */
#include <stdio.h>
#include <stdlib.h>
void Fstrcat(char*, char*);
int  main()
{
    char a[15]="Necmiye",b[6]="Soylu";
    Fstrcat(a,b);
    printf("\n%s",a);
    return 0;
}
void Fstrcat(char *x, char *y)
{
    char *p=x;
    while(*p)
        p++;
    *p++=' ';
    while(*y)
        *p++=*y++;
    *p='\0';
}