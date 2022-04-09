/* seçme sıralaması */
#include <stdio.h>
#include <stdlib.h>
int* selection_sort(int*,int);
int main()
{
    int *array,i=0,j;
    array=(int*)malloc(sizeof(int));
    printf("\ndizinin elemanlarını giriniz lutfen\n");
    do
    {
        scanf("%d",&array[i]);
        i++;
        array=realloc(array,(i+1)*sizeof(int));
    }
    while(array[i-1]!=-1);
    i--;
    array=selection_sort(array,i);
    printf("\n");
    for(j=0;j<i;j++)
        printf("%d ",array[j]);
    return 0;
}
int* selection_sort(int *a, int size)//once en kucugu bul sonra yer degiştir
{
    int i,j,temp,min;
    for(i=0;i<size;i++)
    {
        min=i;
        for(j=i;j<size;j++)
            if(a[j]<a[min])
                min=j;
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    return a;
}