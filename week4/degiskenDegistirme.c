#include <stdio.h>
int main()
{
    int i=80;
    int *iptr=&i;
    *iptr=70;
    printf("\ni nin degeri = %d",i);
    printf("\niptr adresinin icerigi = %d",*iptr);
    return 0;
}