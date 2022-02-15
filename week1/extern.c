/* extern ornegi */
#include <stdio.h>
int fonk(void);
int a=1, b=2,c=3;
int main()
{
    printf("\n%3d\n",fonk());
    printf("\n%3d%3d%3d",a,b,c);//extern yapmayip glabal a yı kullansaydık degerleri değişirdi.a=b=c=1 olurdu
    return 0;

}
int fonk(void)
{
    extern int a;
    int b,c;
    b=c=a;
    return a+b+c;

}