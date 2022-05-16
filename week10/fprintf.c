/* fprintf example from teacher's slide */
#include <stdio.h>
int main()
{
    int hesapNo, bakiye;
    char ad[20];
    FILE *p;
    if((p=fopen("musteri","w"))==NULL)
        printf("the file cannot be open");
    else
    {
        printf("please enter account no, name, and balance  ");
        printf("to stop click control + d ");
        while(!feof(stdin))
        {
            
            printf("\n?  ");
            scanf("%d%s%d",&hesapNo,ad,&bakiye);
            fprintf(p,"%d%s%d",hesapNo,ad,bakiye);
        }
        fclose(p);
    }
    return 0;
}//özetle fprintf dosyaya yazdıran fonksiyondur fprintf(pointer_adı"%d",a); sadece başına pointerın
//adını yazarız onun dışında normal printf gibidir
//fopen dosya açan fonksiyondur pointer_adı = fopen("dosya_adı","acılıs_modu"); dosya acılamadığı durumda NULL döndürür
//w kalbiimiz kadar temez bir dosya açar ;))
//r dosyaya dokunmaz oku diye olduğu gibi açar
//a dosyanın sonuna yazmak için açar
// bunların hangisinin sonuna + koyarsan hem okum ahem yazma haline getirir r+ open for read+write, w+ create for read+write gibi :) 