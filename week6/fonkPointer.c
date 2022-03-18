/* fonksiyon adresi tutan pointer ornegi */
#include <stdio.h>
int kup(int);
int kare(int);
int main()
{
    int (*p)(int);//şeref konugumuz :)
    int n,m;
    printf("\nbir adet sayi giriniz lutfen ");
    scanf("%d",&n);
    printf("\nyapmak istediginin islem nedir?\nkare=1\nkup=2\n");
    scanf("%d",&m);
    if(m==1)
        p=kare;
    else if(m==2)
        p=kup;
    printf("sonuc = %d",p(n));
    return 0;
}
int kare(int x)
{
    return x*x;
}
int kup (int x)
{
    return x*x*x;
}