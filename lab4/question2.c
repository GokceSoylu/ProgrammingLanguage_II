/* write a program in c to add two number using pointers */
#include <stdio.h>
int main()
{
    int a=10,*p=&a,b=20,*ptr=&b;
    printf("the result = %d",*p+*ptr);
    return 0;
}