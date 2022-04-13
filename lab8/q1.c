#include <stdio.h>
enum sanfoundary
{
    a=1,b,c,d,e//bunlar sabit değiştiremezsin!!!
};
int main()
{
    /*b=10;
    printf("%d",b); enum degerlerin sabittir degistiremeyiz! */
    printf("%d",b*c+e-d);
    return 0;
}