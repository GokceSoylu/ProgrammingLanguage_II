#include <stdio.h>
int sum(int);
int main()
{
    int n;
    printf("bu program 1 den n e kadar olan sayıların toplamını yazdırır\nlutfen n sayısını girniz");
    scanf("%d",&n);
    printf("\n%d",sum(n));
    return 0;
}
int sum(int x)
{
    int sonuc=0;
    if(x==0)
        return 0;
    return(x+sum(x-1));/*çok mantıklı değil mi? - x=0 mı değil hadi koda devam edelim aaa eşarbını yan bağlama :) şaka şaka. x=0 değilse koda devam ediyor
    return *+sum(x-1) hadi x-1 çagiriyim dereken 0 olana kadar devam eder diğer açilan işlemler bekler sonra sondan toplayıp gelir */

}