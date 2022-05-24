/* ögrenci bilgilerinden oluşan (öğrn no, isim, bölüm) oluşan sıralı erişimli bir dosya oluşturan ve bu dosya içerisinde isme göre arama yapan
programı yazınız. Dosya oluşturma, listeleme, yeni kayıt ekleme, isme göre arama kısımlarından oluşan bir menü şeklinde olmalıdır. */
#include <stdio.h>
#include <string.h>
void new_record(void);
void show(void);
void search(char[]);  
int main()
{
    int process;
    char name[20];
    printf("\nnewrecord 1\nshow list 2\nsearch by name 3\nexit 4  ");
    scanf("%d",&process);
    while(process!=4)
    {
        switch(process)
        {
            case 1:
                new_record();
                break;
            case 2:
                show();
                break;
            case 3:
                printf("please type the name you want to search ");
                scanf("%s",name);
                search(name);
                break;
        }
        printf("\n? ");
        scanf("%d",&process);
    }
    return 0;
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