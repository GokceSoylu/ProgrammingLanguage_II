/* bir diizdeki çift sayilari basa tek sayilari sona baska bir dizi kulllnamadan atayan c programını yzınız */
#include <stdio.h>
#define size 8
int main()
{
    int array[size],i,j,k,gecici;
    printf("\ndizini elemalarını giriniz lutfen\n");
    for(i=0;i<size;i++)
        scanf("%d",&array[i]);
    printf("\ndizi\n");
    for(i=0;i<size;i++)
        printf("%d ",array[i]);
    i=0;
    j=size-1;
    for(k=0;k<size/2;k++)
    {
        if(array[k]%2==0)//çift
        {
            gecici=array[k];
            array[k]=array[i];
            array[i]=gecici;
            i++;
        }   
        else
        {
            gecici=array[k];
            array[k]=array[j];
            array[j]=gecici;
            j--;
        }    
    }
    printf("\ndizi\n");
    for(i=0;i<size;i++)
        printf("%d ",array[i]);
    return 0;
}
