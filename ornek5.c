/*   char* ara(char*,char) prototipini kullanarak verilen bir katarda istenen karekteri arayan fonksiyonu yazınınz */
#include <stdio.h>
char* ara (char*, char);
int main()
{
    char string[200],c,*sonuc;
    printf("\nstringi giriniz lutfen ");
    gets(string);
    printf("\naramak istediginiz karakteri giriniz lutfen ");
    c=getchar();
    sonuc=ara(string,c);
    if(sonuc==NULL)
        printf("\nkarakter bulunamadı");
    else 
        printf("\nkarakter bulundu");
    return 0;
}
char* ara (char *x, char y)
{
    while(*x!='\0')
    {
        if(*x==y)
            return x;
        x++;
    }
    if(y=='\0')
        return x;
    return NULL;
}