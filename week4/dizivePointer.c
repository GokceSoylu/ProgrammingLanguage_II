/* an example from slide */
#include <stdio.h>
int main()
{
    int a,dizi[10]={1,2,3,4,5,6,7,8,9,10},*p;
    p=dizi;
    a=p[3];
    printf("\na = %d   *p = %d",a,*p);//4 1
    p=dizi+3;
    printf("\n*p = %d",*p);//4
    p=&dizi[3];
    printf("\n*p = %d",*p);//4
    a=(p+2)[2];//p= dizi[3] tü +2 yaptik =5 oldu sonra[2] ile iki ileri attik 7 oldu wooow !!!
    printf("\na = %d",a);//8
    a=*(dizi+3);
    printf("\na = %d",a);//4
    p=dizi;
    printf("\n*p = %d",*p);//1
    a=*(p+2);
    printf("\na = %d",a);//3
    a=*(dizi+1);
    printf("\na = %d",a);//2
    return 0;
}//ez cümle pointers ve dizi adi ayni işi gorur