/* bank_program.c programında kullanılacak dosyayı olusturmak icin yazdım bu kodu */
#include <stdio.h>
int main()
{
    struct bank
    {
        int account_no;
        char name[20], surname[20];
        int balance;
    };
    typedef struct bank bank;
    bank client;
    FILE *p;
    p=fopen("bank","w");
    printf("\nplease type account number, name, surname, nad balance\nto stop click control+d");
    while(!feof(stdin))
    {
        scanf("%d%s%s%d",&client.account_no,client.name,client.surname,&client.balance);
        fseek(p,(client.account_no-1)*sizeof(bank),SEEK_SET);
        fwrite(&client,sizeof(bank),1,p);
    }
    fclose(p);
    return 0;
}