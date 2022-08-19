/* girilen metini pointer kullanarak son kelimenden ilk kelimeye dogru yazdiriniz */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size,i,j;
    char string[200],*p;
    printf("metni giriniz lutfen");
    gets(string);
    for(size=0;string[size]!='\0';size++);
    size++;
    p=(char*)malloc(sizeof(char)*size);
    p=string;
    printf("\nmetnin kelimelerinin ters sirali hali\n");
    for(i=size-1;i>=-1;i--)
        if(*(p+i)==' ' || i==-1)
        {
            for(j=i+1;*(p+j)!=' '&&  *(p+j)!='\0';j++)
                printf("%c",*(p+j));
            printf(" ");
        }    
    return 0;
}