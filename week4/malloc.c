/* malloc() <stdlib.h> kütüphanesinin void donduren bir fonksiyonudur. parentezin içine yazdiğin byte kadar hafizada yer ayirir sizeof()
fonksiyonuda bir degerin kac byte oldugunu dondurur . ek olarak malloc void oldugug için baska bir degisken tipi istersen ona hore degistirmelisin*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,*n;
    printf("i nin bellek kapladıgı yer = %lu",sizeof(i));
    printf("\nn nin bellekte kapladigi yer = %lu",sizeof(n));//aa iki katmış
    return 0;
}   