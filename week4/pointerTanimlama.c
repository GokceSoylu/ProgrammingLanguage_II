#include <stdio.h>
int main()
{
    float n=555.223,*p;
    p=&n;
    printf("\n&n = %d\np = %d\np = %p\np = %x",&n,p,p,p);
    return 0;
}