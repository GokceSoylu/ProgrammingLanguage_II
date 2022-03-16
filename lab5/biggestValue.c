/* dinamik dizi ve reallac kullanarak dizininz en buyuk elemanını bukur */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size,*p,i,max;
    printf("\ndizinin boyutunu giriniz lutfen ");
    scanf("%d",&size);
    p=(int*)calloc(size,sizeof(int));
    printf("\ndizinin elemanlarını giriniz lutfen\n");
    for(i=0;i<size;i++)
        scanf("%d",p+i);
    max=*p;
    for(i=0;i<size;i++)
        if(max < *(p+i))
            max=*(p+i);
    printf("dizinin en buyuyk elemanı : %d",max);
    return 0;
}