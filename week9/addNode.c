/* doğrusal listeye düğüm ekleme örneği */
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
int main()
{
    struct student
    {
        int age;
        char name[20],surname[20];
        struct student *next;
    };
    typedef struct student std;
    std *p,*head,*new_node;
    int i,n,place;
    char name_s[20];
    printf("\nhow many student are there in the list ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            p=(std*)malloc(sizeof(std));
            head=p;
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
        printf("\nage ");
        scanf("%d",&p->age);
    }
    p->next=NULL;
    printf("\nwhere do you want to record new student for begining press 1 for according to name press 2");
    scanf("%d",&place);
    new_node=(std*)malloc(sizeof(std));
    if(place==1)
    {
        new_node->next=head;
        head=new_node;
    }
    else
    {
        p=head;
        printf("after which name do you want to add new student? ");
        scanf("%s",name_s);
        while(strcmp(name_s,p->name)!=0) p=p->next;
        new_node->next=p->next;
        p->next=new_node;
    }
    printf("\nnew student's name ");
    scanf("%s",new_node->name);
    printf("\nnsurname ");
    scanf("%s",new_node->surname);
    printf("\nage ");
    scanf("%d",&new_node->age);
    p=head;
    for(i=0;i<n+1;i++)//please try head
    {
        printf("\n%s %s %d",p->name,p->surname,p->age);
        p=p->next;//can not say p++ it's not pointer :)) be cerafull baby
    }
    return 0;
}