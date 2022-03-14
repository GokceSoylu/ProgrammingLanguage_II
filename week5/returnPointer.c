/* pointer donduren fonksiyon :) */
#include <stdio.h>
#include <stdlib.h>
int * birlestirme (int[],int,int[],int);//oy ne yordun :)
int main()
{
    int a1[5]={1,2,3,4,5},a2[5]={6,7,8,9,10},i,*sonuc;
    sonuc=birlestirme(a1,5,a2,5);
    for(i=0;i<10;i++)
        printf("%d ",sonuc[i]);
    return 0;
}
int * birlestirme(int dizi1[], int size1, int dizi2[], int size2)
{
    int *dizi,i;
    dizi=(int*)calloc(size1+size2,sizeof(int));
    for(i=0;i<size1+size2;i++)
    {
        if(i<size1)
            dizi[i]=dizi1[i];
        else 
            dizi[i]=dizi2[i-size1];
    }
    return dizi;
}//ozetle ogrendigimiz-> pointer dondureceksen bunu * ile belirtmelisin.