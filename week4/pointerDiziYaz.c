/* pointer a atanan diziyi farkli yazdirma sekilleri */
#include <stdio.h>
int main()
{
    int array[10],*p,i;
    for(i=0;i<10;i++)
        array[i]=i;
    p=array;
    printf("\n");
    for(i=0;i<10;i++)//direkt pointerımızı degistirerek yazdırma--> bu işlemden sonra pointer dizinin ilk elemanını göstermez! 
    {
        printf("%d  ",*p);
        p++;
    }
    p--;//p[10] oldu oyle bir deger olmadığı için bir eksiltiyoruz :)
    printf("\n*p = %d\n",*p);
    p=array;
    for(i=0;i<10;i++)
    {
        printf("%d  ",*(p+i));//pointer degerini degistirmeden yazdiriyoruz
    }
    printf("\n*p = %d",*p);
    return 0;
}
