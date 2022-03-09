/* write a program in c to store 10 elements in an array and print the elements using pointer */
#include <stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10},*p,i;
    p=a;
    for(i=0;i<10;i++)
        printf("%d ",*(p+i));
    return 0;

}