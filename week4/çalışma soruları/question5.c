/* bir robotun aldıgı goruntu 0 1 lerden olusan nxn boyutlarında bir matris olarak alınmaktadır --> alınan matriste a matrisinie en cok benzeyen yerini bulunuz */
#include <stdio.h>
#include <math.h>
int maxi,maxj;
int tarama(int*,int,int,int[][3],int);
int main()
{
    int a[3][3]={0,1,0,0,1,0,1,1,1},i=-1,dizi[1000],size,j;
    printf("matrisi giriniz lutfen (bitirmek için -1 giriniz) ");
    while(dizi[i]!=-1)
    {
        i++;
        scanf("%d",&dizi[i]);
    }   
    i++;
    size=sqrt(i);
    int matris[size][size],*p;
    printf("\n\ngirilen matris\n");
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            matris[i][j]=dizi[i*size+j];
            printf("%d ",matris[i][j]);
        }
        printf("\n");
    }
    p=matris;

    i=j=0;
    tarama(*p,i,j,a,size);
    for(i=maxi;i<maxi+3;i++)
    {
        for(j=maxj;j<maxj+3;j++)
        {
            printf("%d ",matris[i][j]);
        }
    }
    return 0;
}
int tarama (int *p, int i, int j, int a[][3], int size)
{
    static int max=0;
    int k,l,counter=0;
    for(k=0;k<3;k++)
    {
        for(l=0;l<3;l++)
        {
            if(p[k+i][l+j]==a[i][j])
                counter++;
        }
    }
    if(counter>max)
    {
        max=counter;
        maxi=i;
        maxj=j;
    }
    if(j<size-3)
        return tarama(*p,i,j+1,a,size);
    else if(i<size-3)
        return tarama(*p,i+1,j,a,size);
    else
        return 0;
}