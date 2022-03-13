/* bir robotun aldıgı goruntu 0 1 lerden olusan nxn boyutlarında bir matris olarak alınmaktadır --> alınan matriste a matrisinie en cok benzeyen yerini bulunuz */
#include <stdio.h>//bi dogru bi yanlıs calısıyor :(
#include <stdlib.h>
#include <math.h>
int maxi,maxj,size;
void tarama(int (*p)[],int,int,int[][3],int);
int main()
{
    int a[3][3]={0,1,0,0,1,0,1,1,1},i=-1,dizi[1000],j;
    printf("matrisi giriniz lutfen (bitirmek için -1 giriniz)\n");
    while(dizi[i]!=-1)
    {
        i++;
        scanf("%d",&dizi[i]);
    }   
    i++;
    size=sqrt(i);
    int matris[size][size],(*p)[size]=matris;//matrisi ata sonra alınan degerleri ppointerla al neden yani? biraz anlamsız olmus
    printf("\n\ngirilen matris\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            p[i][j]=dizi[i*size+j];
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    i=j=0;
    tarama(p,i,j,a,size);
    printf("\ngoruntude a matrisine en cok benzeyen kısım\nyeri satir = %d   sutun = %d\n\n",maxi+1,maxj+1);
    for(i=maxi;i<maxi+3;i++)
    {
        for(j=maxj;j<maxj+3;j++)
        {
            printf("%d ",p[i][j]);
        }
        printf("\n");
    }
    return 0;
}
void tarama (int (*p)[size], int i, int j, int a[][3], int size)
{
    static int max=0;
    int k,l,counter=0;
    for(k=0;k<3;k++)
        for(l=0;l<3;l++)
            if(p[k+i][l+j]==a[k][l])
                counter++;
    if(counter>max)
    {
        max=counter;
        maxi=i;
        maxj=j;
    }
    if(j<size-3)
        tarama(p,i,j+1,a,size);//buraya return yazarsan carsi karisir
    else if(i<size-3)
        tarama(p,i+1,j,a,size);
    else
        return;
}
