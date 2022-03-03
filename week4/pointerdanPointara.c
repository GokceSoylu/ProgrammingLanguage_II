/* bir pointardaki diziyi başka bir pointara da atama */
#include <stdio.h>
int main() 
{
    char array[10]="1234567890",array2[10],*p,*l;
    int i;
    p=array;
    l=array2;
    printf("%s\n",array);
    for(i=0;i<10;i++)
        *(l+i)=*(p+i);
    *(l+i)=*(p+i);
    printf("%s\n",array2);
    return 0;    
}//güzel oldu :)