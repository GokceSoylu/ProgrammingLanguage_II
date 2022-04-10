/* bubble sort kullaranak belirli bir diziyi sıralayan c programını yazınız */
#include <stdio.h>
void bubble_sort(int[], int);
int main()
{
    int i,array[7]={2,4,3,5,1,7,6};
    bubble_sort(array,7);
    for(i=0;i<7;i++)
        printf("%d ",array[i]);
    return 0;
}
void bubble_sort(int a[],int size)
{
    int i, j, tmp, cnt;//kontrol sayesinde dizinin sıralı olması durumunda gereksiz dongu onleniyor :)
    for(i=0;i<size-1;i++)
    {
        cnt=0;
        for(j=0;j<size-1-i;j++)
            if(a[j]>a[j+1])
            {    
                cnt=1;
                tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        if(cnt==0)
            break;
    }
}