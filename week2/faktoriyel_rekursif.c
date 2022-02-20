#include <stdio.h>
int faktoriyel(int);
int main()
{
    faktoriyel(10);
}
int faktoriyel(int x)
{
    int i,result;
    if(x==0)
        return 1;
    faktoriyel(x-1);
    result=1;
    for(i=1;i<=x;i++)
    {
        result*=i;
    }
    printf("\n%d! = %d",x,result);
}