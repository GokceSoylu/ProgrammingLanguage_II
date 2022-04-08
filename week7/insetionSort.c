/* sokma sıralaması */
#include <stdio.h>
#include <stdlib.h>
int* insertion_sort(int*, int);
int main()
{
    int i=0,j,*array;
    array=(int*)malloc(sizeof(int));
    printf("\ndizinin elemanların giriniz lutfen");
    do
    {
        scanf("%d",&array[i]);
        i++;
        array=realloc(array,(i+1)*sizeof(int));
    }
    while(array[i-1]!=-1);
    i--;
    array=insertion_sort(array,i);
    printf("\n");
    for(j=0;j<i;j++)
        printf("%d ",array[j]);
    return 0;
}
int* insertion_sort(int *a, int size)
{
    int i,j,ekle;
    for(i=1;i<size;i++)
    {
        ekle=a[i];
        for(j=i-1;a[j]>ekle && j>=0;j--)//dikkat - var patlama
        {
            a[j+1]=a[j];
            a[j]=ekle;
        }
    }    
    return a;
}//uh zordu