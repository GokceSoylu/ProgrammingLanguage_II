/* değişkenler genel */
#include <stdio.h>/* özet --"herkes kendi çöplüğünde öter"--
                  değişkenler tanımlı olduğu aralıkta geçerli olurlar ve bu aralıktaki değişiklerden etkilenirler. daha iç kisimda tekara tanımlanırsa iç kısımda geçerli olur */
int a=10;
int fonksiyon(int);
int main()
{
    int b=10;
    {
        int c=10;
        fonksiyon(c);
        printf("\na=%d b=%d c=%d\n",a,b,c);
        printf("\nc=%d (paremetre değişkeni)\n",fonksiyon(c));//burası ilginç
        printf("\ntekrar c=%d\n",c);
        int b=20;
    }
    printf("\nb=%d\n",b);
    return 0;
}
int fonksiyon(int x)
{
    a=20;
    return 2*x;
}