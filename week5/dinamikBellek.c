#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,i, *ptr, sum=0;
    printf("eleman sayısını giriniz lutfen ");
    scanf("%d",&n);
    ptr=(int *)malloc(sizeof(n)*n);
    if(ptr==NULL)
        printf("hadizda yeterli yer yok :(");
    printf("dizinin elemanlarını giriniz lutfen ");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
        sum+=*(ptr+i);
    }
    printf("toplam = %d",sum);
    return 0;
}