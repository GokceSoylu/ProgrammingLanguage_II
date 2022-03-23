#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0;
    char *p;
    p=(char*)malloc(sizeof(char));
    while(1)
    {
        scanf("%c",(p+i));
        if(*(p+i)=='0')
            break;
        i++;
        p=realloc(p,(i+1)*sizeof(char));
    }
    printf("\n%s",p);
    return 0;
}