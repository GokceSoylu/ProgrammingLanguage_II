#include <stdio.h>
int main()
{
    int i;
    int *iptr;
    i=10;
    iptr=&i;
    printf("\ni nin adresi = %d",&i);
    printf("\niptr degeri = %d",iptr);
    printf("\n\ni nin degeri = %d",i);
    printf("\n*iptr = %d",*iptr);//i ye işik tutuyor yani
    return 0;
}