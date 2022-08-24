#include <stdio.h>
enum s
{
    a,b,c
};
enum s g;
int main()
{
    g++;
    printf("%d",g);
}