/* fscanf orneği :)) */
#include <stdio.h>
int main()
{
    int account_no, balance, process;
    char name[20];
    FILE *p;
    if((p=fopen("musteri","r"))==NULL)
        printf("\nthe could not be opened");
    else
    {
        printf("\npoor people 1\ndebtor people 2\npeople having money 3\nexit 4\n");
        scanf("%d",&process);
        while(process!=4)
        {
            fscanf(p,"%d%s%d",&account_no,name,&balance);
            switch(process)
            {
                case 1:
                    while(!feof(p))
                    {
                        if(balance==0)
                            printf("\n%s",name);
                        fscanf(p,"%d%s%d",&account_no,name,&balance);
                    }   
                    break;
                case 2:
                    while(!feof(p))
                    {    
                        if(balance<0)
                            printf("\n%s",name);
                        fscanf(p,"%d%s%d",&account_no,name,&balance);
                    }
                    break;
                case 3:
                    while(!feof(p))
                    {
                        if(balance>0)
                            printf("\n%s",name);
                        fscanf(p,"%d%s%d",&account_no,name,&balance);
                    }
                    break;
            }
            rewind(p);
            printf("\n? ");
            scanf("%d",&process);
        }
    }
    return 0;
}