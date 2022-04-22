#include <stdio.h>//create fonksiyonunda return head yapmayınca neden çalışmıyor. head pointer olmasına rağmmen return yapmaya neden gerek oluyor
#include <stdlib.h>
struct student 
{
    int std_num;
    char name[20],surname[20];
    struct student *next;
};
typedef struct student std;
std* create(std*);
void traverse(std*);
std* add_node(std*);
std* delete_node(std*);
int main()
{
    std *head;
    int process;
    while(process!=5)
    {
        printf("\nplease to creaete list presss 1\nto traverse the list press 2\nto add node press 3\nto delete node press 4\nexsit press 5 ");
        scanf("%d",&process);
        switch(process)
        {
            case 1:
            {
                head=create(head);
                break;
            }
            case 2:
            {
                traverse(head);
                break;
            }
            case 3:
            {
                head=add_node(head);
                break;
            }
            case 4:
            {
                head=delete_node(head);
                break;
            }
        }
    }
    return 0;
}
std* create(std *head)
{
    int i,n;
    std *p;
    printf("\nhow many students are there in the list");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            head=(std*)malloc(sizeof(std));
            p=head;
        }
        else
        {
            p->next=(std*)malloc(sizeof(std));
            p=p->next;
        }
        printf("\nname ");
        scanf("%s",p->name);
        printf("\nsurname ");
        scanf("%s",p->surname);
        printf("student number ");
        scanf("%d",&p->std_num);
    }
    p->next=NULL;
    return head;
}
void traverse(std *head)
{
    std *p;
    p=head;
    while(p!=NULL)
    {
        printf("\n\n%s %s %d",p->name,p->surname,p->std_num);
        p=p->next;
    }   
}
std* add_node(std *head)
{
    std *p=head,*q,*new_node;
    int num;
    new_node=(std*)malloc(sizeof(std));
    printf("\nwhich student do you want to add new student before (for the end position press 0)\npleaese enter the student number");
    scanf("%d",&num);
    printf("\nname ");
    scanf("%s",new_node->name);
    printf("\nsurname ");
    scanf("%s",new_node->surname);
    printf("\nstudent number ");
    scanf("%d",&new_node->std_num);
    if(num==0)
    {
        while(p->next!=NULL) p=p->next;
        p->next=new_node;
        new_node->next=NULL;
    }
    else
    {
        while(p->std_num!=num)
        {
            q=p;
            p=p->next;
        }
        if(p==head)
        {
            new_node->next=p;
            head=new_node;
        }
        else
        {
            new_node->next=p;
            q->next=new_node;
        }
    }
    return head;
}
std* delete_node(std *head)
{
    std *p=head,*q;
    int num;
    printf("\nplease enter the student number that you want to delete ");
    scanf("%d",&num);
    while(num!=p->std_num)
    {
        q=p;
        p=p->next;
    }
    if(p==head)
    {
        head=p->next;
        free(p);
    }
    else if(p->next!=NULL)
    {
        q->next=p->next;
        free(p);
    }
    else
    {
        q->next=NULL;
        free(p);
    }
    return head;
}