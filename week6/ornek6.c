/* unsigned sayıyı binary degere cevirin - bunun için iki fonk ornegi var ikisinide yazip bakicaz */
#include <stdio.h>
#include <stdlib.h>
void convertToBinary1(unsigned);
void convertToBinary2(unsigned);
int main()
{
    unsigned n;
    printf("\nbinary degere cevirmek istediginiz sayıyı giriniz lutfen ");
    scanf("%u",&n);
    //convertToBinary1(n);    bu çalişmıyor
    printf("\n");
    convertToBinary2(n);
    return 0;
}
void ConvertToBinary1(unsigned x)
{
    int i=0,j;
    unsigned *p;
    while(1)
    {
        *(p+i)=x%2;
        x=x/2;
        if(x==1)
        {
            *(p+i+1)=x;
            break;
        }
        i++;
    }
    for(j=i+1;j>=0;j--)
        printf("%u ",*(p+i));
}
void convertToBinary2(unsigned x)
{
    int i=0,j;
    unsigned *p;
    p=(unsigned*)malloc(sizeof(unsigned));
    while(1)
    {
        *(p+i)=x%2;
        x=x/2;
        if(x==1)
        {
            *(p+i+1)=x;
            break;
        }
        i++;
        p=realloc(p,sizeof(unsigned)*(i+1));
    }
    for(j=i+1;j>=0;j--)
        printf("%u ",*(p+j));
}