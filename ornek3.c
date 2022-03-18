/* pointer kullanarak dikdortgenin alanını ve cevresinin hesaplayan fonkdston yazınız */
#include <stdio.h>
void rectangle(int,int,int*,int*);
int main()
{
    int a=4,b=5,area=0,perimeter=0;
    rectangle(a,b,&area,&perimeter);
    printf("\ndiktortgenin kısa kenearı = %d, uzun kenarı = %d, alanı = %d, cevresi = %d",a,b,area,perimeter);
    return 0;
}
void rectangle(int x, int y, int *alan, int *cevre)
{
    *alan=x*y;
    *cevre=2*(x+y);
}