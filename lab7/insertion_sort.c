/* insertion sort kullanrak belirli bir diziyi sıralayan c programını yazınız lutfen */
#include <stdio.h>
void insertion_sort(int[],int);
int main()
{
    int i,array[7]={2,4,3,6,1,7,5};
    insertion_sort(array,7);
    for(i=0;i<7;i++)
        printf("%d ",array[i]);
    return 0;
}
void insertion_sort(int a[],int size)//en sevdiğim :))
{
    int i,j,ekle;
    for(i=1;i<size;i++)
    {
        ekle=a[i];
        for(j=i-1;a[j]>ekle &&j>=0;j--)
        {
            a[j+1]=a[j];
            a[j]=ekle;
        }    
    }    
}