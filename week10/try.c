#include <stdio.h>
int main()
{
    int hesapNo, bakiye, s;
    char ad[20];
    FILE *p, *pp;
    scanf("%d",&s);
    if((p=fopen("musteri","w"))==NULL)
        printf("the file cannot be opened ");
    else
    {
        printf("please enter account no, name, and balance  ");
        printf("to stop click control + d ");
        printf("\n?  ");
        scanf("%d%s%d",&hesapNo,ad,&bakiye);
        while(!feof(stdin))
        {
            fprintf(p,"%d%s%d\n",hesapNo,ad,bakiye);
            printf("\n?  ");
            scanf("%d%s%d",&hesapNo,ad,&bakiye);
        }
        fclose(p);
    }
    if((pp=fopen("musteri","r"))==NULL)
        printf("\nthe file could not be opened ");
    else
    {
        printf("\naccount no name balace\n");
        fscanf(pp,"%d%s%d",&hesapNo,ad,&bakiye);
        while(!feof(pp))
        { 
            printf("\n%d%s%d",hesapNo,ad,bakiye);
            fscanf(pp,"%d%s%d",&hesapNo,ad,&bakiye);
        }
        fclose(pp);
    }
    
    return 0;
} 