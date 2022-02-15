/* varibles özet niteliğinde örnek */
#include <stdio.h>
int a=10;
void local(void);
void staticLocal(void);
void global(void);
int main()
{
    int a=20;
    {
        int a=30;
        printf("\n\nmain fonksiyon blok ici a=%3d",a);
    }
    printf("\n\nmain fonksiyon blok disi a=%3d",a);
    local();
    staticLocal();
    global();
    local();
    staticLocal();
    global();
    printf("\n\nmain fonsiyon a=%3d",a);
    return 0;
}
void local (void)
{
    int a=40;
    printf("\n\nlocal fonksiyon a=%3d",a);
    a++;
    printf("\n\nlocal fonksiyon a=%3d",a);
}
void staticLocal(void)
{
    static int a=50;
    printf("\n\nstatic local fonksiyon a=%3d",a);
    a++;
    printf("\n\nstatic local fonksiyon a=%3d",a);
}
void global(void)
{
    printf("\n\ngloabl fonksiyon a=%3d",a);
    a--;
    printf("\n\nglobal fonksiyon a=%3d",a);
}