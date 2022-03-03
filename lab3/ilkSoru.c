#include <stdio.h>
void fun(int n, int a, int b)
{
    if (n >= 10)
      return;
    fun(n + 2, a, b + n);
    printf("%d %d %d\n", n, a, b);
}
int main()
{
    int x=0,y=5,z=7;
    fun(x,y,z);
    return 0;
}