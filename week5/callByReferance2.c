/* pointer olmayan bir degiskeni referance ile fonksiyona gonderme */
#include <stdio.h>
void incremant (int*);
int main()
{
    int i=9;
    printf("\n%d",i);
    incremant(&i);//ilginç pointer degil ama adresle gonderdeğimiz için call by referance odu bunu diziylede yapabiliyorduk yeterki adres olsun 
    printf(" %d",i);
    return 0;
}
void incremant (int *a)
{
    (*a)++;// burada * ve paranteze ozen gozterelim aksi takdirde çalişmaz
}