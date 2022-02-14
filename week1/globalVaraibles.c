#include <stdio.h>
int a=10;// global değişkenin pek bir olayı yok orada yerel değişken varsa o gecerli oluyor
void fonk(void);//adının global olmasına bakma biri bişey dedi mi geri adım atıyor hemen ;)
void fonk2(void);
int main()

{
    printf("\na=%d\n",a);
    int a;
    a=20;
    printf("a=%d",a);
    fonk();
    printf("\na=%d",a);
    fonk2();
    printf("\na=%d",a);
    return 0;

}
void fonk (void)
{
    a=25;
}
void fonk2 (void)
{
    int a;//burada tanımladıgın için sadace burada gecerli oluyor
    a=30;
}