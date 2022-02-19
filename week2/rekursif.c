#include <stdio.h>
int  fonk(int);
int main()
{
    int n;
    printf("bu program 1 den n e kadarki sayıları yazdırırı\nn sayısını giriniz");
    scanf("%d",&n);
    fonk(n);
    return 0;
}
int fonk(int x)
{
    if(x==0)
        return 0;
    fonk(x-1);
    printf("% d",x);/*neler oluyor? burada fonksiyon çağiriliyor bakıyo x=0 değil devam ediyo kodu okumaya fonk(x-1) i çagir diyo koda devam edemaden hoop onu
    onu çağirmaya gidiyo bu boyle x=0 olana kadar devamm ediyor. x00 olunca retrun 0 donduruyo ama kodun devamini okumamisti. f(1)i çagirmisti ya eb son ordan baliyo
    kodunn devamini okumaya print var x=1 yazdırıyo bu tamam f(2)yı çağirmak için gitimisti devamini okuyo boyle boyle 1 2 .. n seklinde çikti veriyo 
    0 yazdırmamasına 1 den balyip n e gitmesine dikkat!
    */
}
