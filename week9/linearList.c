#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct list 
    {
        int age;
        char name[20],surname[20];
        struct list *next;
    };
    typedef struct list list;
    list *p,*head;
    int i,n;
    printf("\nhow many students are there in the list");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            head=(list*)malloc(sizeof(list));
            p=head;
        }
        else
        {
            p->next=(list*)malloc(sizeof(list));
            p=p->next;
        }
        printf("\nname ");
        scanf("%s",p->name);
        printf("age ");
        scanf("%d",&p->age);
    }
    p->next=NULL;
    p=head;
    while(p!=NULL)
    {
        printf("\n\nname %s\nage %d",p->name,p->age);
        p=p->next;//bunu unutmayınız :))
    }    
    return 0;
}