/* iç içe pointer sayesinde iç içe dizi gibi bisey olusturuyoroz hadi izleyelim */
#include <stdio.h>
int main()
{
    char **l[4],*yaz[3]={"haziran","temmuz","agustos"},*kis[3]={"aralik","ocak","subat"},*sonBahar[3]={"eylul","ekim","kasim"},*ilkBahar[3]={"mart","nisan","mayis"};
    int i,j;
    l[0]=yaz;
    l[1]=kis;
    l[2]=ilkBahar;
    l[3]=sonBahar;
    for(i=0;i<4;i++)
        for(j=0;j<3;j++)
            printf("  %s",l[i][j]);//voov matris gibi oldu :O
    return 0;
}