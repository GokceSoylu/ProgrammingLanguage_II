/* cos(x)=1-x^2/2! + x^4/4!4 + . . . +x^n/n! kullanıcıdan alınan N ve X degerleri icin cos(x) degerini hesaplayan programı yazınız :) */
#include <stdio.h>//rekursif sevenler :))
float fcos(int,int);
int p(int,int);//kuvvet hesaplar
int f(int);//faktoriyel hesaplar
int main()
{
    int n,x;
    printf("bu program cos(x)=1-x^2/2! + x^4/4!4 + . . . +x^n/n! fonksiyonunu hesaplamaktadır\nlutfen bir n ve x degeri giriniz ");
    scanf("%d%d",&n,&x);
    printf("\nsonuc = %.2f",1-fcos(n,x));
    return 0;
} 
float fcos(int n, int x)
{
    if(n==0)
        return n;
    else
        return (float)p(x,n)/f(n)+fcos(n-2,x);
}
int p(int a, int b)
{
    if(b==0)
        return 1;
    else
       return  a*p(a,b-1);
}
int f(int a)
{
    if(a==0)
        return 1;
    else    
        return f(a-1)*a;
}