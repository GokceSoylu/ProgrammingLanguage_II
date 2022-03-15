/* malloc ve realloc kullanımı */
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int size,i,*p,plus;
    printf("dizinin eleman sayisini girin lutfen ");
    scanf("%d",&size);
    p=(int*)malloc(sizeof(int)*size);
    printf("\ndizinin elemanlarini giriniz lutfen \n");
    for(i=0;i<size;i++)
        scanf("%d",(p+i));
    printf("\ndiziyi buyutmek istiyorsaniz eklemek istediginiz eleman sayisini giriniz lutfen ");
    scanf("%d",&plus);
    p=realloc(p,(size+plus)*sizeof(int));
    printf("\nek elemalarida giriniz\n");
    for(i=size;i<(plus+size);i++)
        scanf("%d",(p+i));
    printf("\ndizi\n");
    for(i=0;i<(size+plus);i++)
        printf("%d ",*(p+i));
    free(p);
    return 0;
}   