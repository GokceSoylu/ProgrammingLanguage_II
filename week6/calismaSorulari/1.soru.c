/* pascal ucgenini yazdiran c kodu satir sayısı kullanıcıdan alınacaktır */
#include <stdio.h>
int f(int, int);
int main()
{
    int n,i,j;
    printf("\npascal ucgeni icin dsatır sayısı giriniz lutfen ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
            printf(" ");
        for(j=0;j<=i;j++)
            printf("%d ",f(i,j));
        printf("\n");
    }
    return 0;
}
int f(int i, int j)
{
    if(j==0 || j==i)
        return 1;
    return f(i-1,j-1)+f(i-1,j);
}