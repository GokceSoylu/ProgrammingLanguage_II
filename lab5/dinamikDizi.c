/* kullanıcıdan boyutunu alarak dizinin boyuttunu buyut son diziyide yazdir */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p,size,plus,i;
    printf("\ndizinin eleman sayisi nedir? ");
    scanf("%d",&size);
    p=(int*)malloc(sizeof(int)*size);
    printf("\ndizinin elemanlarini giriniz lutfen \n");
    for(i=0;i<size;i++)
        scanf("%d",p+i);
    printf("diziye ekleme yapmak istediginiz eleman sayisi nedir? ");
    scanf("%d",&plus);
    p=realloc(p,sizeof(int)*(size+plus));
    printf("\nek elmanlarida giirniz lutfen\n");
    for(i=size;i<(size+plus);i++)
        scanf("%d",p+i);
    printf("\ndizi\n");
    for(i=0;i<(size+plus);i++)
        printf("%d ",*(p+i));
    return 0;
}