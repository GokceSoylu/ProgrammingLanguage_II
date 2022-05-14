/* listenin ilk ve son elemanını değiştiren fonksiyonu yazınız. fonnksiyon paremetre olarak bir liste alacak ve güncellenen listeyi geri döndürecektir */
#include <stdio.h>
#include <stdlib.h>
struct person
{
    int age;
    struct person *next;
};
typedef struct person prs;
prs* changeFirstAndLast(prs *head);
prs* find_last(prs *head);
int main()
{
    prs *head, *p;
    int n;
    head=(prs*)malloc(sizeof(prs));
    p=head;
    printf("listenin elemanlarını giriniz\ndurdurmak icin -1 giriniz ");
    while(1)
    {
        scanf("%d",&n);
        if(n!=-1)//direkt scanf'de p->age'e atamadım çünkü -1'i listeye kaydetmek istemiyorum. Bu kontrolu yapmalıydım 
        {
            p->next=(prs*)malloc(sizeof(prs));
            p=p->next;
            p->age=n;
        }
        else  break;
    }
    head=changeFirstAndLast(head->next);
    p=head;
    while(p!=NULL)
    {
        printf("%d ",p->age);
        p=p->next;
    }
    return 0;
}
prs* changeFirstAndLast(prs *head)
{
    prs *last, *p, *q;//last sondan bir önceki eleman, q head'den sanraki yani ikinci eleman için 
    last=find_last(head);
    p=head;
    q=head->next;
    head=last->next;
    last->next->next=q;
    last->next=p;
    p->next=NULL;
    return head;
}
prs* find_last(prs *head)
{
    prs *p;
    p=head;
    while(p->next->next!=NULL) 
        p=p->next;
    return p;
}