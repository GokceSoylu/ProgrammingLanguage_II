#include <stdio.h>
void fonk (void);
void fonk_static(void);
int main()
{
    fonk();
    fonk_static();
    printf("\n\n");
    fonk();
    fonk_static();
    return 0;
}
void fonk(void)
{
    int id=1;
    printf("\nfonk() id degisleni degeri: %d",id);
    id+=21;
    printf("\nfonk() id degiskeni degeri: %d",id);
}
void fonk_static(void)
{
    static int id=1;
    printf("\nfonk_static() id degiskeni degeri: %d",id);
    id+=21;
    printf("\nfonk_static() id degiskeni degeri: %d",id);
}