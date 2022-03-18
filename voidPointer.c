/* pointerı void olarakta tanımlamak mumkun sadece adresteki degiskenın degerine ulamak için(yanı pointerı kulllanacagımız zaman) tipi belirtiriz */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    void *p;
    p=(char*)calloc(4,sizeof(char));
    strcpy((char*)p,"123");
    printf("\n%s\n",(char*)p);//buradaki kullanıma dikkat
    free(p);
    p=(double*)malloc(sizeof(double));//once double için yer actik
    *(double*)p=12.3456;
    printf("%lf",*(double*)p);
    return 0;
}//tek bir eleman atıyacak olsak bile yani dizi olmasa bile malloc calloc ile bellekten yer ayırmalıyız cunku void bellekte nasil yer ayırsın tipi bile yok