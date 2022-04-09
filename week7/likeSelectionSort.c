/* seçerek siralama yapıyım derke boyle bir şey çıktı ortaya selection'dan farkı selection en kucugu bulup sonra yerdeğiştirme yapıyor 
burada ise ilk kedinden kucuk gordugu ile heman yer deegiştiriyor ve devam ediyor aslında baya benziyor sonucta ilk dobgunun sonunda en kcuk en basta oluyor*/
#include <stdio.h>
#include <stdlib.h>
int* selection_sort (int*, int);
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
int* selection_sort(int *a, int size)
{
    int i,j,tmp,min;
    for(i=0;i<size;i++)
        for(j=i+1;j<size;j++)
            if(a[j]<a[i])
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
    return a;
}
