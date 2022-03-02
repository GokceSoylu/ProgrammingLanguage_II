/* -burada deneme yaptim duzenlı hali arrayPointer2.c de - dizinin adı aslında dizinin ilk elemanının adresidir bu sayede dizinin adıyla pointersa adres atama yapabiliriz. 
atana adresin ilk adres oldugunu unutmadan da buna göre istediğimiz elemanı cagirabiilriz-- bunları zaten biliyorduk 
soru şu -> bir dizi elemanı 4 byte yer kaplıyorsa p+1 yaptıgımızda nasıl bir sonraki elemana gecebiliyor p+4 te gecmesi gerekmez mi*/
#include <stdio.h>
#define size 5
int main()
{
    int array[5]={1,2,3,4,5},*p,i;
    p=array;
    for(i=0;i<5;i++)
        printf("\n%d.elemanın hafizadaki yeri: %d",i+1,&array[i]);//görüldüğü üzere her biri hafizada 4 byte yer kaplıyor
    int a=12,*n;
    n=&a;
    printf("\n%d",a);
    printf("\n%d",*n);
    n++;
    printf("\n&a = %d   n++ = %d",&a,n);//aaaa +4 yapti ops demekkiş bir sonraki hafiza alanına geciyormus 
    
    return 0;//aklıma bi fikir geldi acaba pointerin herbiride 4 byte kaplıyor bir arttirinca ononlamı alakalı direkt dort mu arrtiriyor acaba?->dogruymus :)

}