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
    if((p=fopen("bank","w"))==NULL)
        printf("\nthe file could not be opened ");
    else
    {
        printf("please type the account no, name, surname, and the balance  ");
        while(!feof(stdin))
        {
            scanf("%d%s%s%d",&client.account_no, client.name, client.surname, &client.balance);
            fwrite(&client,sizeof(bank),1,p);
        }
    }
    fclose(p);
    return 0;//evet dosyayı okuyamıyorsun çünkü rastgele erişimli dosya😎
}// fwite(&degiskenin_adı,sizeof(degisken_turu),1,ponterin_adi);