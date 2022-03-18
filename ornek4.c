/* int uzunluk(char*) prototipini kullanarak strlen fonksiyonuna benzer bir fonksiyon yazınız */
#include <stdio.h>
int uzunluk(char*);
int main()
{
    char string[200];
    printf("\nstringi giriniz lutfen ");
    gets(string);
    printf("\nstringin uzunlugu = %d",uzunluk(string));
    return 0;
}
int uzunluk(char *array)
{
    int i;
    for(i=0;*(array+i)!='\0';i++);
    return i;
}