/* write a program in c to swap elements using call by referance */
#include <stdio.h>
void swap (char*);
int main()
{
    char a[6]="12345",*ptr=a;
    swap(ptr);
    printf("\ndizinin ters hali;\n%s",a);
    return 0;
}
void swap(char *m)
{
    char gecici;
    int i,j;
    for(i=0;*(m+i)!='\0';i++);//i=5
    for(j=0;j<i/2;j++)
    {
        gecici=*(m+j);
        *(m+j)=*(m+i-j-1);
        *(m+i-j-1)=gecici;
    }
}