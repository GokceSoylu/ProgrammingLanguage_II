/* eger fonksiyonun birden fazla deger dondurmesini istiyorsak referans ile cagirma kullanmalıyılıyız çünkü return ile asdedece bir deger dondurebiliriz 
sonuc ve kalanı elde edecegimiz bome islemi */
#include <stdio.h> 
int bolme(int, int, int*);
int main()
{
    int kalan=0, bolen, bolunen, *kln=&kalan;
    printf("sırsıyla boleni ve bolunenni giriniz lutfen: ");
    scanf("%d%d",&bolunen,&bolen);
    printf("\n%d / %d = %d  kalan = %d",bolunen, bolen, bolme(bolunen,bolen,kln), *kln);
    return 0;
}
int bolme(int bolunen, int bolen, int *kalan)
{
    *kalan=bolunen%bolen;//buraya odaklanalım. pointer olarak aldıktan sonra normal bir degiskenmis gibi davranamayız. Normal bir pointera atama degisiklik 
    return bolunen/bolen;//için ne gerekiyorsa fonksiyonun içindeki parametre olarak alınan pointerda da uygulamalıyız.
}