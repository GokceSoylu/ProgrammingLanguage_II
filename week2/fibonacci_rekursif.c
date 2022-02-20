#include <stdio.h>
int fibonacci(int);
int main()
{
    int n,i;
    printf("dizinin kac terimli olmasını istersiniz");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        printf("%4d",fibonacci(i));
    return 0;

}
int fibonacci(int x)//düz mantik fibonacci kendinden iki oncekinin toplamıdır!
{
    if(x==0 || x==1)
        return 1;
    else
        return fibonacci(x-1)+fibonacci(x-2);
}