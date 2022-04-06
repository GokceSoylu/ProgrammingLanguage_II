/* strcpy fonksiyonu bir degiskenin içine istene stringi atar */
#include <stdio.h>//ufak bir not free pointerın içini bosaltmak degil hazida kapladıgı alanı serbest birakmaktır
void f(char*, char*);
int main()
{
    char p[]="necmiye", pp[]="soylu";
    f(p,pp);
    printf("\n%s",p);   
    return 0;
}
void f(char *x, char *y)
{
    while(*y)
        *x++=*y++;
    *x='\0';
}
