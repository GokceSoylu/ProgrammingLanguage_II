/* bir char şifre matrisi kullanıcıda alınır daha sonra kullanicıni girdigi sifreye gore bu matristeki karsilik geldigi eleman bukunur ve sifre cözulur */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int satir,sutun,i,j,k,n;
    char *p,*m;
    m=(char*)malloc(sizeof(char));
    printf("\nsifre matrisin boyutları nelerdir? ");
    scanf("%d%d",&satir,&sutun);
    p=(char**)malloc(satir*sizeof(char));
    for(i=0;i<satir;i++)
        p[i]=(char*)malloc(sutun*sizeof(char));
    printf("\nsifre matrisnizi girininiz lutfen\n");
    for(i=0;i<satir*sutun;i++)
        scanf("%c",(p+i));
    printf("\nsifre matris\n");
    for(i=0;i<satir;i++)
    {
        for(j=0;j<sutun;j++)
            printf("%c ",*(p+i*sutun+j));
        printf("\n");
    }
    printf("sifreyi giriniz lutfen \ndurdurmak icin -1 giriniz");
    k=0;
    while(1)
    {
        scanf("%d",&n);
        if(n==-1) break;
        j=n%10;
        i=n/10;
        m[k]=*(p+i*sutun+j);
        k++;
        m=realloc(m,(k+1)*sizeof(char));
    }
    printf("sifre cozumlendi\n%s",m);
    free(p);
    free(m);
    return 0;
}