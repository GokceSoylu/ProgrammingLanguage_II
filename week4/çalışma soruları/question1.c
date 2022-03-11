/* verilen sifreyinin digitlerini elde edip onu i j degeri olarakmtaratip diziye aktaralim */
#include <stdio.h>
#include <stdlib.h>
int  main()
{
    int n,m,i,j;
    printf("\nsifre matrisinizin boyutları nelerdir? ");
    scanf("%d%d",&n,&m);
    char *p[m],cozum[100];
    *p=(char*)malloc(sizeof(char)*n);
    printf("\nsifre matrisinizi giriniz lutfen\n");//buradan sonra işler bozuluyor
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
            scanf("%c",p[i][j]);
    }
    n=m=0;
    printf("\n\nsifreyi giriniz lutfen(bitirmek icin -1 giriniz)\n");
    while(n!=-1)
    {
        scanf("%d",&n);
        j=n%10;
        i=n/10;
        cozum[m]=p[i][j];
        m++;
    }
    for(i=0;cozum[i]!='\0';i++)
        printf("%c ",cozum[i]);
    return 0;
}