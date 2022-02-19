#include <stdio.h>
//int gid;  ops! tanımlamadık bile hatta extern daha yazmadım diger dosyada nasıl yazdırabilir? global degiskeni extern sınıfındadir, açılma extern.c dosyasında:)
void fonk(void)
{
    printf("\ndeneme2.c gid degidkeninin degeri: %d\n",gid);
}