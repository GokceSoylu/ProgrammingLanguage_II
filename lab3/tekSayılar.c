#include <stdio.h>
int tekSayi (int[],int); 
int main()
{
    int array[11]={1,2,3,4,5,6,7,8,9,10,11};
    printf("dizide %d adet tek sayı bulunmaktadir",tekSayi(array,11));
    return 0;
}
int tekSayi(int a[], int s)
{
    if(s<0)
        return 0;
    if(a[s]%2!=0)
        return 1+tekSayi(a,s-1);
    else 
        return tekSayi(a,s-1);
}
