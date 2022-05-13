/* Listenin ortanca elamanını silen fonksiyonu yazınız. Fonksiyon paremetre olarak bir liste alacak ve güncellenen listeyi geri döndürektir */
#include <stdio.h>
#include <stdlib.h>
struct numbers
{
    int n;
    struct numbers *next;
};
typedef struct numbers num;
num* delete_median(num *head);
num* find_median(num *head);
int numberOf_list(num *head);
int main()
{
    num *head, *p;
    int x;
    head=(num*)malloc(sizeof(num));
    p=head;
    printf("liste elemanlarını giriniz\ndurdurmak için -1 giriniz lütfen\n");
    while(1)
    {
        scanf("%d",&x);
        if(x!=-1)
        {
            p->next=(num*)malloc(sizeof(num));
            p=p->next;
            p->n=x;
        }
        else break;
    }
    head=delete_median(head->next);
    p=head;
    while(p!=NULL)
    {
        printf("%d ",p->n);
        p=p->next;
    }
    return 0;        
}
num* delete_median(num *head)
{
    num *p, *median;
    p=find_median(head);
    median=p->next;
    p->next=median->next;
    free(median);
    return head;
}
num* find_median(num *head)
{
    num *p=head;
    int m, i;
    m=numberOf_list(head);
    m=m/2-1;//amacım ortancadan bir önceki elemanı elde etmek
    for(i=1;i<m;i++) p=p->next;
    return p; 
}
int numberOf_list(num *head)
{
    num *p=head;
    int counter=0;
    while(p!=NULL)
    {
        p=p->next;
        counter++;
    }
    return counter;
}