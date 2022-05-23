#include <stdio.h>
#include <string.h>
struct bank
{
    int account_no;
    char name[20], surname[20];
    int balance;
};
typedef struct bank bank;
int enter_process(void);
void new_account(FILE *);
void upload_account(FILE *);
void delete_account(FILE *);
void write_file(FILE *);
void show_accounts(FILE *);
int main()
{
    FILE *p;
    int process;
    if((p=fopen("bank","r+"))==NULL)
        printf("\nthe file could not be opened ");
    else
    {
        while((process=enter_process())!=6)
        {
            switch (process)
            {
                case 1: new_account(p); break;
                case 2: upload_account(p); break;
                case 3: delete_account(p); break;
                case 4: write_file(p); break;
                case 5: show_accounts(p); break;
            }
        }
    }
    fclose(p);
    return 0;
}
int enter_process(void)
{
    int process;
    printf("\nadding new account 1\nuploadind an account 2\ndeleting an account 3\nwriting the list on text file 4\nshowing accounts list 5\nexit 6  ");
    scanf("%d",&process);
    return process;
}
void new_account(FILE *p)
{
    int accountNumber;
    bank client;
    printf("\nplease enter the account number  ");
    scanf("%d",&accountNumber);
    fseek(p,(accountNumber-1)*sizeof(bank),SEEK_SET);
    client.account_no=accountNumber;
    printf("\nname, surname, balance  ");
    scanf("%s%s%d",client.name,client.surname,&client.balance);
    fwrite(&client,sizeof(bank),1,p);
}
void upload_account(FILE *p)
{
    int accountNumber, money;
    bank client;
    printf("\nplease enter the account number which will be changed  ");
    scanf("%d",&accountNumber);
    fseek(p,(accountNumber-1)*sizeof(bank),SEEK_SET);
    fread(&client,sizeof(bank),1,p);
    if(client.account_no==0)
        printf("\nthe account does not exist");
    else
    {
        printf("\nplease enter the size of money (+) or (-)  ");
        scanf("%d",&money);
        client.balance+=money;
        fseek(p,(accountNumber-1)*sizeof(bank),SEEK_SET);
        fwrite(&client,sizeof(bank),1,p);
    }
}
void delete_account(FILE *p)
{
    int accountNumber;
    bank client, gap_account={0," "," ",0};
    printf("\nplease enter the account number which will be deleted  ");
    scanf("%d",&accountNumber);
    fseek(p,(accountNumber-1)*sizeof(bank),SEEK_SET);
    fwrite(&gap_account,sizeof(bank),1,p);
}
void write_file(FILE *p)
{
    FILE *pp;
    bank client;
    pp=fopen("bank_txt","w");
    rewind(p);
    while(1)
    {
        fread(&client,sizeof(bank),1,p);
        if(feof(p)) break;
        if(client.account_no!=0)
            fprintf(pp,"%d %s %s %d\n",client.account_no,client.name,client.surname,client.balance);
    }
}
void show_accounts(FILE *p)
{
    bank client;
    rewind(p);
    while(1)
    {
        fread(&client,sizeof(bank),1,p);
        if(feof(p)) break;
        if(client.account_no!=0)
            printf("\n%d %s %s %d",client.account_no,client.name,client.surname,client.balance);
    } 
}