/* ilkel strcmp */
#include <stdio.h>
int Fstrcmp(char*, char*);
int main()
{
    char a[]="necmiye", b[]="necmiye", c[]="soylu",d[]="necsoy";
    printf("\n%d",Fstrcmp(a,b));// 0
    printf("\n%d",Fstrcmp(c,a));// (+)
    printf("\n%d",Fstrcmp(a,d));// (-)
    return 0;
}
int Fstrcmp(char *x, char *y)
{
    if(*x && *y && *x==*y)//çok ilginç degil mi? *x means *x!='\0' whaat :))
    {
        x++;
        y++;
        return Fstrcmp(x,y);
    }
    else
        return (*x - *y);
}