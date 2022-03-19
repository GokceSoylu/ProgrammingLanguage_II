/* enter tusuna basılana kadar kullanıcının girdigi karakterleri alan ve her bir karakter aldıgında * bastırıp en son tum karakterleri yazdıran program */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0,j;
    char *p;
    p=(char*)malloc(sizeof(char));
    printf("\nistediginiz karakterleri giriniz. Durdurmak 1 giriniz lutfen\n");
    while(1)
    {
        p=realloc(p,sizeof(char)*(i+1));//kral hareket
        scanf("%c",p+i);
        if(*(p+i)=='1')
            break;
        printf("*");
        i++;
    }
    for(j=0;j<i;j++)
        printf("%c ",*(p+j));
    return 0;
}
