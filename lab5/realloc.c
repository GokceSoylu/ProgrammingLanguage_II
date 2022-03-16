/* once adın için gereklşii alanı malloc ile ayırınız daha sonra realloc ile soyad için genislet */
#include <stdio.h>
#include <stdlib.h>
int  main()
{
    int  i;
    char *p;
    p=(char*)malloc(sizeof(char)*7);
    printf("\nadınız ");
    for(i=0;i<7;i++)
        scanf("%c",p+i);
    p=realloc(p,sizeof(char)*13);
    printf("soy ad ");
    for(i=7;i<13;i++)
        scanf("%c",p+i);
    printf("\n%s",p);
    return 0;
}