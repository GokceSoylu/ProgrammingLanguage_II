/* bir cumlenin kelimelerini son kelimeden ilk kelimeye dogru yazdira c programi */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size,i,j;
    char *p,a[14];
    printf("\nstringin uzunlugu nedir? ");
    scanf("%d",&size);
    p=(char*)malloc((size+1)*sizeof(char));
    printf("\ncumleyi giriniz ");
    gets(p);
    getchar();
    for(i=size;i>=0;i--)
        if(*(p+i)==' ')
            for(j=i+1;*(p+j)!=' ';j++)
                printf("%c",*(p+j));
    return 0;
}