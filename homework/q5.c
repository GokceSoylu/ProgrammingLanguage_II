/* listenin başndaki elemanı keserek sona ekleyen fonsiyonu yazınız */
#include <stdio.h>
#include <stdlib.h>
struct number//is bu şekilde bıarakmak sıkıntıye sebep oluyor. Yazarken hata yapma riski ciddi şekilde artıyor
{
    int number;
    struct number *next;
};
struct number* cutheadaddlast(struct number *);
struct number* find_last(struct number *head);
int main()
{
    struct number *head, *p;
    int n;
    head=(struct number*)malloc(sizeof(struct number));
    p=head;
    printf("\nliste elemanlarının giriniz\ndurdurmak icin -1 giriniz\n");
    while(1)
    {
        scanf("%d",&n);
        if(n!=-1)
        {
            p->next=(struct number*)malloc(sizeof(struct number));
            p=p->next;
            p->number=n;
        }
        else break;
    }
    head=cutheadaddlast(head->next);
    p=head;
    while(p!=NULL)
    {
        printf("%d ",p->number);
        p=p->next;
    }
    return 0;
}
struct number* cutheadaddlast(struct number *head)
{
    struct number *p, *q;
    q=find_last(head);
    p=head;
    head=head->next;
    q->next=p;
    p->next=NULL;
    return head;
}
struct number* find_last(struct number *head)
{
    struct number *p=head;
    while(p->next!=NULL) p=p->next;
    return p;
}