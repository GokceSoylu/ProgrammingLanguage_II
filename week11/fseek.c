/* favori fonksiyonum :)) fseek(ponter_adı,kacıncı_bayttasın,istenen_islem); iatenen islem--> SEEK_SET baştan  / SEEK_CUR bulunan konumdan / SEEK_END sondan başatır :) */
#include <stdio.h>
int main()
{
    struct bank
    {
        int account_no; 
        char name[20]; 
        char surname[20];
        int balance;
    };
    typedef struct bank bank;
    bank client;
    FILE *p;
    if((p=fopen("bank","r+"))==NULL)
        printf("\nthe file could not be opened\n");
    else
    {
        printf("please type the account no, to stop enter 0");
        scanf("%d",&client.account_no);
        while(client.account_no!=0)
        {
            printf("name, surname, balance ?");
            scanf("%s%s%d",client.name, client.surname, &client.balance);
            fseek(p,(client.account_no-1)*sizeof(bank),SEEK_SET);
            fwrite(&client,sizeof(bank),1,p);
            printf("account no?  ");
            scanf("%d",&client.account_no);
        }
    }
    fclose(p);
    return 0;
}