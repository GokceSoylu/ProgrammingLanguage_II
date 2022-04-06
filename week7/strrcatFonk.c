/* strcat fonksiyonu */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void Fstrcat(char*, char*);
int main()
{
    char a[13]="necmiye",b[]="Soylu",*c;
    c=(char*)malloc(13*sizeof(char));
    Fstrcat(a,b);
    printf("\n%s",a);
    return 0;
}
void Fstrcat(char *x, char *y)
{
    char *p=x;
    while(*p)
        p++;
    while(*y)
        *p++=*y++;
    *p='\0';
}
