/* m uzunluğunki bir dizide x kez tekrar eden ve en cok tekrar eden  sayıları bulup yzdırınız. m X ve dizi elemanları kullanıcıdsan alınaacaktır*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x,m,*p,i,j,counter,max=0,max_eleman;
    printf("dizinizin eleman sayısını giriniz ");
    scanf("%d",&m);
    p=malloc(sizeof(int)*m);
    printf("\ndizinin elemanlarını giriniz lutfen\n");
    for(i=0;i<m;i++)
    {
        printf("%d.eleman",i+1);
        scanf("%d",&p[i]);
    }
    printf("kac kez tekrar eden elemanlrın yazdırılmasını istersiniz ");
    scanf("%d",&x);
    printf("\n%d kez tekrar eden elemanlar: \n",x);
    for(i=0;i<m;i++)
    {
        counter=0;
        for(j=i;j<m;j++)
        {
            if(p[i]==p[j])
            {
                counter++;
            }    
        }
        if(counter==x)
            printf(" %d",p[i]);
        if(counter>max)
        {
            max=counter;
            max_eleman=p[i];
        }    
    }
    printf("\nen cok tekrar eden eleman = %d",max_eleman);
    return 0;
}
