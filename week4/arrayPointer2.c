/* pointersın degerini degistirirken dizi ve degiskenlerle oynamak--> pointers aritmatiği aslinda :) */
#include <stdio.h>
int main()
{
    int a=10,*p,array[5]={1,2,3,4,5},*n;
    n=&a;
    p=array;
    printf("\na = %d   *p = %d   *n = %d",a,*p,*n);//10,1,10
    p++;//+4byte ile bir sonraki hafiza alannina yani bir sonraki dizi elemanına gecer
    printf("\n*p = %d",*p);//2
    *p++;//su an gosterdiği degerdeki degiskenin degerini bir arttirir :) -- işin içine * girdiğimi artik degiskenin içerigi gozukur sadece ona bakarsın
    printf("\n*p = %d",*p);//3
    printf("\np[4] = %d",p[4]);//5 birde boyle bir kolaylık var pointersi sanki dizi adi gibi duzunup p[i] seklind elemanları cagirabilirsin :)  
    return 0;
}