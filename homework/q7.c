/* paremetre olarak head ve age bilgilerini alan ve listedeki ikinci age ifadesini silen fonksiyonu yazınız. prototip -> node* deletNode(node*, int); */
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int age;
    struct node *next;
};
typedef struct node node;
node* deleteNode(node*, int);
void show_list(node *head);
int main()
{
    node *head, *p;
    int n;
    head=(node*)malloc(sizeof(node));
    p=head;
    printf("\nliste elemanlarını giriniz\ndurdırmak icin -1 giriniz\n");
    while(1)
    {
        scanf("%d",&n);
        if(n!=-1)
        {
            p->next=(node*)malloc(sizeof(node));
            p=p->next;
            p->age=n;
        }
        else break;
    }
    printf("\nliste  ");
    show_list(head->next);
    printf("\nsilmek istediginiz yası giriniz lutfen  ");
    scanf("%d",&n);
    head=deleteNode(head->next, n);
    show_list(head);
    return 0;
}
node* deleteNode(node *head, int age)
{
    int counter=0;
    node *p=head, *q=p;
    while(1)
    {
        if(p->age==age)
        {
            counter++;
            if(counter==2)
                break;
        }
        q=p;
        p=p->next;
    }
    q->next=p->next;
    free(p);
    return head;
}
void show_list(node *head)
{
    node *p=head;
    while(p!=NULL)
    {
        printf("%d ",p->age);
        p=p->next;
    }
}