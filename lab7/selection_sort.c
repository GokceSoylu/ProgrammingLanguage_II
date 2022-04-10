/* seçim sıralamsı kullanarak belirli bir diziyi sıralama için bir c programı yazınız */
#include <stdio.h>
void selection_sort(int[], int);
int main()
{
    int i, j, array[7]={2,5,4,3,1,7,6};
    selection_sort(array,7);
    for(i=0;i<7;i++)
        printf("%d ",array[i]);
    return 0;
}
void selection_sort(int a[], int size)
{
    int i, j, tmp, min;
    for(i=0;i<size;i++)
    {
        min=i;
        for(j=i;j<size;j++)
            if(a[min]>a[j])
                min=j;
        tmp=a[i];
        a[i]=a[min];
        a[min]=tmp;
    }
}//pointer olarak tanımlarsan diziyi return pointer donfdurup eşitlersin ama dizi alarak tanımlayıp pointera esitlemezsin