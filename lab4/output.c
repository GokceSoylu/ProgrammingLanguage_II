#include <stdio.h>
int f(int, int*, int**);
int main()
{
    int c, *b, **a;
    c=4;
    b=&c;
    a=&b;
    printf("\n\nand result = %d\n",f(c,b,a));
    printf("\n\n%d",c);
    return 0;
}
int f(int x, int *py, int **ppz)
{
    **ppz+=1;
    printf("\nafter ppz+=1; = %d\n",**ppz);
    x= *py * **ppz;
    printf("\nafter x= *p * **ppz; = %d\n",x);
    *py *= 2;
    printf("\nafter *py *= 2; = %d\n",*py);
    x*= *py +3;
    printf("after x*= *p +3; = %d",x);
    return (x + *py + **ppz);

}//günün anlam ve onemini alatan ozet --> fonksiyona degiskeni direkt gonderdğimizde sadece kopyalar köklü bir degişiklik yapamaz. 
//pointer olarak gonderdigimiz zaman aderesi aldıgımız için yaptıgımız degisiklikler koklu olur degiskeni etkiler! Zaten pointer kullanma mantiği bu bize bunu sağlamalı.