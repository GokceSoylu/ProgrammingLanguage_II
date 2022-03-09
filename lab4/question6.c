/* write a program in c to compute all elements of an array using pointer */
#include <stdio.h>
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9},*p=a,sum=0,i;
    for(i=0;i<9;i++)
        sum+=*(p+i);
    printf("toplam = %d",sum);
    return 0;
}