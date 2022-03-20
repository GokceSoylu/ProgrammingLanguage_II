/* bir sayi dizisinin mutlak degerce ardısık elemnları arasındaki en buyuk farki ve yerini bulan c programi */
#include <stdio.h>
#define size 5
int m(int);//mutlak
void f(int*a,int*maxi,int i, int *max);
int main()
{
    int array[size],i,maxi,max=0;
    printf("\ndizinin elemanlarinş giriniz lutfen\n");
    for(i=0;i<size;i++)
        scanf("%d",&array[i]);
    i=0;
    f(array,&maxi,i,&max);
    printf("\ndizinin elemaları arasındaki en buyuk fark %d\n|%d - %d| = %d",max,array[maxi-1],array[maxi],max);
    return 0;
}
void f(int *a, int *maxi, int i, int *max)
{
    int fark;
    if(i<size-1)
    {
        f(a,maxi,i+1,max);
        fark=m(a[i]-a[i-1]);
        if(fark>*max)
        {
            *max=fark;
            *maxi=i;
        }
    }    
}
int m(int x)
{
    if(x>=0)
        return x;
    else
        return -x;
}