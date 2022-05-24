/* ögrenci bilgilerinden oluşan (öğrn no, isim, bölüm) oluşan sıralı erişimli bir dosya oluşturan ve bu dosya içerisinde isme göre arama yapan
programı yazınız. Dosya oluşturma, listeleme, yeni kayıt ekleme, isme göre arama kısımlarından oluşan bir menü şeklinde olmalıdır. */
#include <stdio.h>
#include <string.h>
void create_file(void);
void new_record(void);
void show(void);
void search(char[]);  
int main()
{
    int process;
    char name[20];
    printf("\ncreate file 1\nnewrecord 2\nshow list 3\nsearch by name 4\nexit 5  ");
    scanf("%d",&process);
    while(process!=5)
    {
        switch(process)
        {
            case 1:
                create_file(); break;
            case 2:
                new_record(); break;
            case 3:
                show(); break;
            case 4:
                printf("please type the name you want to search ");
                scanf("%s",name);
                search(name); break;
        }
        printf("\n? ");
        scanf("%d",&process);
    }
    return 0;
}
void create_file(void)
{
    FILE *p;
    int std_num, x=1;
    char name[20],departmant[20];
    p=fopen("student","w");
    while(x==1)    
    { 
        printf("\nname ");
        scanf("%s",name);
        printf("student number ");
        scanf("%d",&std_num);
        printf("departmant ");
        scanf("%s",departmant);
        fprintf(p,"\n%d %s %s",std_num, name, departmant);
        printf("devam etmek icin 1 giriniz");
        scanf("%d",&x);
    }
    fclose(p);
}
void new_record(void)
{
    FILE *p;
    int student_num;
    char name[20], departmant[20];
    p=fopen("student","a");
    printf("name ");
    scanf("%s",name);
    printf("student number ");
    scanf("%d",&student_num);
    printf("departmant ");
    scanf("%s",departmant);
    fprintf(p,"\n%d %s %s",student_num, name, departmant);
    fclose(p);
}
void show(void)
{
    int student_num;
    char name[20], departmant[20];
    FILE *pp;
    pp=fopen("student","r");
    while(!feof(pp))
    {
        fscanf(pp,"%d%s%s",&student_num, name, departmant);
        printf("\n%d %s %s",student_num, name, departmant);
    }
    fclose(pp);
}
void search(char the_name[])
{
    int student_num;
    char name[20], departmant[20];
    FILE *pp;
    pp=fopen("student","r");
    while(!feof(pp))
    {
        fscanf(pp,"%d%s%s",&student_num, name, departmant);
        if(strcmp(name,the_name)==0)
            printf("\n%d %s %s",student_num, name, departmant);
    }
    fclose(pp);
}
