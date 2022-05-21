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
    if((p=fopen("bank","r"))==NULL)
        printf("\nthe file could not be opened ");
    else
    {
        while(!feof(p))
        {
            fread(&client,sizeof(bank),1,p);
            if(client.account_no!=0)
                printf("\n%d %s %s %d",client.account_no,client.name,client.surname,client.balance);
        }
    }
    fclose(p);
    return 0;
}