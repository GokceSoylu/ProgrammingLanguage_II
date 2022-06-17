#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *metin, *matris;
    int row, column, i, j, counter=0, a=0;
    printf("\n matrisin boyutlarını giriinz ");
    scanf("%d%d",&row,&column);
    matris=(char*)malloc((row*column)*sizeof(char));
    metin=(char*)malloc(sizeof(char));
    printf("\nsifre martrisi giriniz \n");
    scanf("%s",matris);
    printf("\nsifreyi giriniz. Durdurmak icin -1 giriniz ");
    scanf("%d",&a);
    while(a!=-1)
    {
        j=a%10;
        i=a/10;
        i--;
        j--;
        metin[counter]=matris[i*row+j];
        counter++;
        metin=realloc(metin,sizeof(char)*(counter+1));
        printf("\n? ");
        scanf("%d",&a);
    }
    printf("\nsifre cözümlendi = %s",metin);
    return 0;
}// :)