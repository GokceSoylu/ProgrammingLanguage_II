/* dinamik bellek orengi */
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int *a,i,size,plus;
    printf("\ndizinin kac elemali olmasini istersininz? ");
    scanf("%d",&size);
    a=(int*)malloc(sizeof(int)*size);
    printf("\ndizinizi girininz lutfen\n");
    for(i=0;i<size;i++)
        scanf("%d",(a+i));//burası oldukça onemli direkt a uzerine atama yaptirdigin için &'a gerek yok zaten adres degeri var
    printf("\ndiziye ekleme yapak istiyorsaniz ek eleman sayisini giriniz lutfen\n");
    scanf("%d",&plus);
    a=realloc(a,sizeof(int)*(plus+size));
    printf("\nek elemanlarida giriniz lutfen\n");
    for(i=size;i<(size+plus);i++)
        scanf("%d",(a+i));
    printf("\ndizi\n");
    for(i=0;i<(size+plus);i++)
        printf("\nadres = %d  deger= %d ",(a+i),*(a+i));//burada da işte yıldız var biliyorsun adres degeri deil adresteki degiskenin degerine ulasmak için
    free(a);//hayata uygulanasi fonksiyon işin bittiyse yer kaplama ;)) free affetmeye benziyo :))
    return 0;
}