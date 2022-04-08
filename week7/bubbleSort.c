/* uw beynim */
#include <stdio.h>
#include <stdlib.h>
int* bubble_Sort(int[],int);
int main()
{
    int *array,i=0,j;
    array=(int*)malloc(sizeof(int));
    printf("\ndizinin elemanlarını giriniz lutfen");
    while(array[i-1]!=-1)
    {
        scanf("%d",&array[i]);
        i++;
        array=realloc(array,(i+1)*sizeof(int));
    }
    i--;
    array=bubble_Sort(array,i);
    printf("\n");
    for(j=0;j<i;j++)
        printf("%d ",array[j]);
    return 0;
}
int* bubble_Sort(int *a, int size)
{
    int i,j,tmp;
    for(i=0;i<size-1;i++)
        for(j=0;j<size-1-i;j++)
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
    return a;
} 