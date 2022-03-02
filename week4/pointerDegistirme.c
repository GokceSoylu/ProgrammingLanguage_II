/* normalde pointera atadiğimiz degiskenin içerigini degistiriyorduk simdi direkt pointera atdiğimiz adresi değiştiricez */
#include <stdio.h>
int main()
{
    int s=80,a=70,*i;
    i=&s;
    printf("\n*i = %d",*i);
    i=&a;
    printf("\n*i = %d",*i);
    return 0;
    
    
}