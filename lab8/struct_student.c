/*deers devam listesinde bulunan öğrenciler için kullanılılacak "student" isimli bir struct yapısını, "number", "name", "surname" ve "midtermGrade" 
alanlarından oluşacak şekilde tanımlayınız. Tanımladığınız bu bu yapıyı kullanarak 10 öğrenci için bir struct dizisi oluşturunuz ve klavyeden 
3 öğrencinin bilgilerini alınız.Daha sonra bilgileri alınan öğrencilerin bilgilerini ekrana yazdırınız */
#include <stdio.h>
int main()
{
    int i;
    struct student
    {
        int number;
        char name[10];
        char surname[10];
        int midtermGrade;
    };
    typedef struct student std;
    std a[10];
    printf("\nsırasıyla ogrencinin numarası, vize sınav notu, adı ve soyadını giriniz lutfen\n");
    for(i=0;i<3;i++)
    {
        printf("\n%d.ogrenci ",i+1);
        scanf("%d",&a[i].number);
        scanf("%d",&a[i].midtermGrade);
        scanf("%s",a[i].name);
        scanf("%s",a[i].surname);
    }
    for(i=0;i<3;i++)
    {
        printf("\n%d.ogrenci adı: %s\nsoyadı: %s\nogr no: %d\nvize sonucu: %d",i+1,a[i].name,a[i].surname,a[i].number,a[i].midtermGrade);
        printf("\n");
    }
    return 0;
}//:))