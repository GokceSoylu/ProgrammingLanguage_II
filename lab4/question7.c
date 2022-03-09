/* write a program in c to print a string in reverse using pointer */
#include <stdio.h>
int main()
{
    char a[]="necmiye soylu",*ptr=a;
    int i,j;
    for(i=0;*(ptr+i)!='\0';i++);
    for(j=i-1;j>-1;j--)
        printf("%c",*(ptr+j));//degistir dememis sadece tersten yazdir demis :))
    return 0;
}