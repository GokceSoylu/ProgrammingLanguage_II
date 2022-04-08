/* sıralımı diye kontrol ediyoruz bu sayede dongu sayısı azalıyor :) */
#include <stdio.h>
#include <stdlib.h>
int* bubbleSort(int*, int);
int main()
{
    int *array,i=0,j;
    array=(int*)malloc(sizeof(int));
    printf("\ndizinin elemanlarını girniz lutfen\n");
    while(array[i-1]!=-1)
    {
        scanf("%d",&array[i]);
        i++;
        array=realloc(array,(i+1)*sizeof(int));
    }
    i--;
    array=bubbleSort(array,i);
    printf("\n");
    for(j=0;j<i;j++)
        printf("%d ",array[j]);
    return 0;
}
int* bubbleSort(int *a,int size)//cnt ile dizi sıralı diye kontrol ediyoruz. Eger siralıysa if partının içine hiç gşrmez ve cnt=0 olarak kalır:)
{
    int i,j,tmp,cnt;
    for(i=0;i<size-1;i++)
    {
        cnt=0;
        for(j=0;j<size-i-1;j++)
            if(a[j]>a[j+1])
            {
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
                cnt=1;
            }
        if(cnt==0)
            break;
    }
    return a;
}