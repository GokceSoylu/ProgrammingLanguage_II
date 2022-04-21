#include <stdio.h>
#include <stdlib.h>
struct student 
{
    int std_num,mid,final;
    char name[20];
};
typedef struct student std;
std *p,*head,best;

void show_list(std *p, int counter);
float avarege(std *p, int counter);
void update(std *p, int counter);
void new_record (std *p, int *counter);
std best_student (std *p, int counter);
int main()
{
    p=(std*)malloc(sizeof(std));
    int islem,counter=0;
    float ort;
    while(1)
    {
        printf("\nyapmak istediginiz islemi giriniz lutfen (durdurmak icin -1 giriniz)");
        scanf("%d",&islem);
        switch(islem)
        {
            case 1:
            {
                new_record(p,&counter);
                
                break;
            } 
            case 2:
            {
                printf("%d\n",counter);
                show_list(p,counter);
                
            
                break;
            } 
            case 3: 
            {
                update(p,counter);
                break;
            }
            case 4:
            {
                printf("\n%f",avarege(p,counter));
                break;
            }
            case 5:
            {
                best=best_student(p,counter);
                printf("\n%s",best.name);
                break;
            } 
            case -1: return 0;
            default: printf("\nyanlis giris yaptınız"); 
        }
    }   
    return 0;
}
void new_record(std *p, int *counter)
{   
    
   p=realloc(p,(*counter+1)*sizeof(std)); 
    if(*counter==0)
        head=p;
    printf("\nname ");
    scanf("%s",(p+*counter)->name);
    printf("\nstudent number ");
    scanf("%d",&(p+*counter)->std_num);
    printf("\nmidterm grade ");
    scanf("%d",&(p+*counter)->mid);
    printf("\nfinal grade ");   
    scanf("%d",&(p+*counter)->final);
    *counter=*counter+1;
}
void show_list(std *p, int counter)
{
    int i;
    for(i=0;i<counter;i++)
        printf("\n\n%s \nstudent num: %d\nmidterm grade %d\nfinal grade %d",(head+i)->name,(head+i)->std_num,(head+i)->mid,(head+i)->final);
}
void update(std *p,int counter)
{
    int num,islem,i=0;
    printf("\nbilgilerini guncellemek istediginiz ogrencinin numarasını giriniz ");
    scanf("%d",&num);
    printf("\ndegisiklik yapmak istediginiz bilgi \nogrenci numarası icin 1\nisim icin 2\nvize notu icin 3\nfinal notu icin 4 e basınız");
    scanf("%d",&islem);
    while((p+i)->std_num!=num) i++;
    switch (islem)
    {
        case 1: 
        {
            printf("\nogrencinin yeni numarasını giriniz ");
            scanf("%d",&(p+i)->std_num);
            break;
        }
        case 2:
        {
            printf("\nogrencinin yeni ismini giriniz lutfen");
            scanf("%s",(p+i)->name);
            break;
        }
        case 3: 
        {
            printf("\nogrencinin yeni vize notunu giriniz ");
            scanf("%d",&(p+i)->mid);
            break;
        }
        case 4:
        {
            printf("\nogrencinin yeni final notunu giriniz ");
            scanf("%d",&(p+i)->final);
            break;
        }
        default: printf("\nyanlis giris yaptiniz");
    }
}
float avarege(std *p,int counter)
{
    std *pp=head;
    int sum=0,num;
    printf("hangi ogrencinin ortalamasını hesaplamak istersiniz\nogrencinin ogrenci numrasını giriniz lutfen ");
    scanf("%d",&num);
    while(pp->std_num!=num)
        pp++;
    return ((float)pp->mid*0.4+pp->final*0.6);
}
std best_student(std *p, int counter)
{
    float max=0,ort=0;
    int i,max_i;
    for(i=0;i<counter;i++)
    {
        ort=(float)(head+i)->mid*0.4+(head+i)->final*0.6;
        if(max<ort)
        {
            max=ort;
            max_i=i;
        }    
    }
    return *(head+max_i);
}//ne soruydu ama :)