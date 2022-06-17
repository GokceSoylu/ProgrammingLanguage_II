#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int satir ,sutun, i, j, n=0, counter=0;
    printf("sifre matrisinizin boyutları nedir?\nsatir ");
    scanf("%d",&satir);
    printf("sutun ");
    scanf("%d",&sutun);
    char **p;
    p=(char**)malloc(satir*sizeof(char));
    for(i=0;i<satir;i++)
        p[i]=(char*)malloc(sutun*sizeof(char));
    printf("matrisinizi giriniz lutfen\n");
    for(i=0;i<satir;i++)
        for(j=0;j<sutun;j++)
            scanf("%c",&p[i][j]);
    char *m;
    m=(char*)malloc(sizeof(char));
    while(1)
    {
        printf("sifreyi giriniz durdurmak için -1\n");
        scanf("%d",&n);
        if(n==-1) break;
        j=n%10;
        i=n/10;
        strcpy(&m[counter],&p[i][j]);
        counter++;
        m=realloc(m,(counter+1)*sizeof(char));
    }
    printf("sifreniz cozumlendi\n%s",m);
    free(p);
    free(m);
    return 0;
}