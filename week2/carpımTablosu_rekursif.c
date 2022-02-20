#include <stdio.h>
int carpımTablo(int);
int main()
{
    carpımTablo(10);
    return 0;   
}
int carpımTablo(int x)
{
    int i;
    if(x==0)
        return 0;
    
    carpımTablo(x-1);
    for(i=1;i<11;i++)
    {
        printf("%3d",x*i);
        
    }
    printf("\n");
}