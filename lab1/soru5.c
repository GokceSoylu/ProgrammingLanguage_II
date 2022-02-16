/* area of circle*/
#include <stdio.h>
float square (const int);
int main()
{
    int r;
    printf("what is the radius?");
    scanf("%d",&r);
    printf("area = %f",square(r));
    return 0;
}
float square (const int r)
{
    float pi=3.14,area;
    area=pi*r*r;
    return area;

}