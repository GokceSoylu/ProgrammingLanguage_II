/* yerel değişkenler */
#include <stdio.h>
int main()
{
    int a=10,b=10;
    printf("\nilk a=%d b=%d\n",a,b);
    {
        int a=20;
        b=20;
        printf("a=%d b=%d",a,b);
    }
    printf("\na=%d b=%d",a,b);//buaraya dikkat! B yi a gibi burada tekrar tanımlamadiğin için  blokk içindeki değişiklik blok dişindada devam etti
    return 0;
}