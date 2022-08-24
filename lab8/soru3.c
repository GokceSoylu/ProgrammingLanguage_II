#include <stdio.h>
int main()
{
    enum result {pass, fail};
    enum result s1, s2;
    s1=pass;
    s2=fail;
    printf("%d",s1);
    return 0;
}//output 0 