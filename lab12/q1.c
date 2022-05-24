/* öğrenci bilgilerinden oluşan (no, isim, bölüm) rastgele erişimli bir dosya oluşturan ve bu dosya içerisinde öğrenci no ya göre arama yapan
programı yazınız. program menü şeklinde olamlıdır. dosya oluşturma,kayıt ekleme gibi tüm fonksiyonlar yazılmalıdır */
#include <stdio.h>
struct student
{
    int number;
    char name[20], dep[20];
};
typedef struct student std;
int menu(void);
void create_file(void);
void scanf_std(std*);
void new_record(void);
std search(int);
int main()
{
    int x;
    std student;
    x=menu();
    while(x!=4)
    {
        switch(x)
        {
            case 1:
                create_file(); break;
            case 2:
                new_record(); break;
            case 3:
                printf("\naramak istediginiz ogrenci no? ");
                scanf("%d",&x);
                student=search(x);
                printf("\n%d %s %s",student.number, student.name, student.dep);
        }
        x=menu();
    }
    return 0;
}
int menu(void)
{
    int x;
    printf("\ndosyayı olusturmak icin 1\nyeni ögrenci eklemek icin 2\narama yapmak icin 3\ncıkıs 4 ");
    scanf("%d",&x);
    return x;
}
void create_file(void)
{
    FILE *p;
    std student;
    int x=1;
    p=fopen("student_rand","w");
    while(x==1)
    {
        scanf_std(&student);
        fwrite(&student,sizeof(std),1,p);
        printf("\ndevam etmek icin 1 giriniz ");
        scanf("%d",&x);
    }
    fclose(p);
}
void scanf_std(std *student)
{ 
    printf("\nogrenci no  "); scanf("%d",&student->number);
    printf("\nname  "); scanf("%s",student->name);
    printf("\nbolum  "); scanf("%s",student->dep);
}
void new_record(void)
{
    FILE *p;
    std student;
    p=fopen("student_rand","a+");
    scanf_std(&student);
    fwrite(&student,sizeof(std),1,p);
    fclose(p);
}
std search(int x)
{
    std student;
    FILE *p;
    p=fopen("student_rand","r");
    while(!feof(p))
    {
        fread(&student,sizeof(std),1,p);
        if(student.number==x) return student;
    }
}