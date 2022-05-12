/* -1 girilene kadar kullanıcının girdiği sayıları listenin başına, çift sayıları listenin sonuna kaydeden programı yazınız*/
#include <stdio.h>
#include <stdlib.h>
struct student
{
    int number;
    struct student *next;
};
typedef struct student std;
std *head, *new;
void add_beginning(std*);
void add_last(std*);
int main()
{
    head=(std*)malloc(sizeof(std));
    while(1)
    {
        new=(std*)malloc(sizeof(std));
        printf("\nplease enter the student number ");
        scanf("%d",&new->number);
        if(new->number==-1) 
            break;
        if(new->number%2!=0)
            add_beginning(new);
        else 
            add_last(new);
        new=new->next;
    } 
    while(head->next==NULL)
    {    
        printf("%d ",head->number);
        head=head->next;   
    }
    return 0;
}
void add_beginning(std *new)
{
    //if(head->next==NULL)head=new;
    //else
    //{
        new->next=head;//hata  burada ilk  başta head->next->next yok ki
        head=new;
    //} 
}
void add_last(std *new)
{
    std *p;
    while(p->next!=NULL) p=p->next;
    p->next=new;
    new->next=NULL;
}