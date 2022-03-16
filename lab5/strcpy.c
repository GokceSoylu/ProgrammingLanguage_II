/* adını ve soyadını arada bosluk birakarak strcpy fonksiyonu ile yazdırma */
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *p,*pp,name[20],soy_ad[20];
    int Lname,Lsur_name;
    printf("\nismin ve soy ismin uzunlugu nedir? ");
    scanf("%d%d",&Lname,&Lsur_name);
    p=(char*)malloc(sizeof(char)*(Lname+1));
    pp=(char*)malloc(sizeof(char)*(Lsur_name+1));
    printf("\nisim: ");
    scanf("%s",name);
    strcpy(p,name);
    printf("\nsoy isim: ");
    scanf("%s",soy_ad);
    strcpy(pp,soy_ad);
    printf("\n\n%s %s",p,pp);
    return 0; 
}
