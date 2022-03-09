/* write a program in c to calculate the length of the string using pointer */
#include <stdio.h>
int main()
{
    int i=0;
    char str[]="necmiye soylu",*ptr;
    ptr=str;
    while(*ptr!='\0')
    {
        ptr+=1;
        i++;
    }
    printf("stringin uzunlugu = %d",i);
    return 0;
}