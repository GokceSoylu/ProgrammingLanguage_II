#include <stdio.h>
#include <stdlib.h>
void f(int, int*, char*);
int main()
{
    int n,*p,size,i;
    char *pp;
    p=(int*)malloc(sizeof(int));
    pp=(char*)malloc(sizeof(char));
    printf("\nogrenci numaranızı giriniz lutfen ");
    scanf("%d",&n);
    f(n,p,pp);
    return 0;
}
void f(int n, int *p, char *pp)
{
    int i, counter_e=0, counter_o=0;
    while(n>0)
    {
        i=n%10;
        n=n/10;
        if(i%2==0)
        {
            *(pp+counter_e)=i;
            counter_e++;
            pp=realloc(pp,(counter_e+1)*sizeof(char));
        }
        else 
        {
            *(p+counter_o)=i;
            counter_o++;
            p=realloc(p,(counter_o+1)*sizeof(int));
        }
    }
    printf("\nnumaradaki cift sayılar %s",pp);
    for(i=0;i<counter_e;i++)
        printf("%d",*(pp+i));
    printf("\nnnumaranızdaki tek sayılar ");
    for(i=0;i<counter_o;i++)
        printf("%d",*(p+i));
    free(p);
    free(pp);
}