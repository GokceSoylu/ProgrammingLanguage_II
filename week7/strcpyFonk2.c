/* strcpy fonksiyonu bu slayttan */
#include <stdio.h>
void f(char*, char*);
int main()
{
    char p[]="sabriye gulsum",pp[]="soylu";
    f(p,pp);
    printf("\n%s",p);
    return 0;
}
void f(char *x, char *y)
{
    char *ptr=x;//tek far pointra atayıp pointer uzerinden islem islem ypamak gerek varmı? bnece hayır
    while(*y)
        *ptr++=*y++;
    *ptr='\0';
} 