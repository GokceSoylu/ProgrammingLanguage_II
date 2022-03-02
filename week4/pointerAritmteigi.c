/* pointer arttırma eksiltme bunu pek sevmedim hadi öğrenelim */
#include <stdio.h>
int main()
{
    int a=1;
    int *i;
    i=&a;
    printf("\n*i = %d",*i);
    printf("\ni = %d",i);
    (*i)++;//işaret ettiği adresteki degiskenin değerinin bir arttırır
    printf("\n\n(*i)++ = %d",*i);
    i++;//bir sonraki adresi gostermesinin saglar. her adres 4 byte kapladiği için sayı 4 artar
    printf("\ni++ = %d",i);
    return 0;
}