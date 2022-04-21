/* doğrusal listeden düğüm silme örneği */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    struct student
    {
        int std_num;
        char name[20];
        struct student *next;
    };
    typedef struct student std;
    std *p,*head,*q;
    int i,n,place;
    printf("how many students are there in the list ");
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
        printf("\nname  ");
        scanf("%s",p->name);
        printf("\nstudent number ");
        scanf("%d",&p->std_num);
    }
    printf("\nwhich node do you want to delete ");
    scanf("%d",&place);
    p=head;
    if(place==1)
    {
        head=p->next;
        free(p);
    }
    else
    {
        for(i=0;i<place-1;i++)
        {
            q=p;
            p=p->next;
        }
        if(place!=n)
        {
        q->next=p->next;
        free(p);
        }
        else
        {
            q->next=NULL;
            free(p);
        }    
    }
    p=head;
    for(i=0;i<n-1;i++)
    {
        printf("\n%s %d",p->name,p->std_num);
        p=p->next;
    }
    return 0;
}