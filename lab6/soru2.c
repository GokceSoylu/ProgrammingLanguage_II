#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n,m,i,j;
    char a[50],b[50],*p;
    printf("\nilk stringi giriniz ");
    gets(a);
    printf("\nikinci stringi giriniz lutfen ");
    gets(b);
    n=strlen(a);
    m=strlen(b);
    p=(char*)malloc((n+m+1)*sizeof(char));
    for(i=0;i<n;i++)
        *(p+i)=a[i];
    for(j=0;j<m;j++)
        *(p+i+j)=b[j];
    printf("\n%s",p);
    return 0;
}