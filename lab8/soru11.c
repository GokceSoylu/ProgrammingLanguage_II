#include <stdio.h>
enum s
{
    a=1, b
};
enum s1
{
    c, d
};
int main()
{
    enum s1 s1=c;
    enum s1 s=a;
    enum s s2=d;
    printf("%d %d %d",s,s1,s2);
    return 0;
}// output 1 0 1