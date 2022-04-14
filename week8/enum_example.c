#include <stdio.h>
enum monthList// yeni renk 😁
{
    ocak=1,subat,mart,nisan,mayıs,haziran,temmuz,agustos,eylul,ekim,kasim,aralik
};
typedef enum monthList months;
int main()
{
    months a=nisan;
    printf("%d",a);
    return 0;
}