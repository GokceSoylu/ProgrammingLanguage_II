/* pointer kullanarak iki degidkenin yerinin degistiren fonksiyon yazınız */
#include <stdio.h>
void swap(int*,int*);
int main()
{
    void (*ptr)(int*,int*);
    ptr=swap;
    int a=10,b=20,*p=&a,*pp=&b;
    printf("a= %d b= %d",a,b);
    ptr(p,pp);
    printf("\na = %d b= %d",a,b);
    return 0;
}
void swap(int *x, int *y)
{
    int gecici;
    gecici=*x;
    *x=*y;
    *y=gecici;
}