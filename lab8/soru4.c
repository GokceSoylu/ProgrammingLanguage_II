#include <stdio.h>
enum examples{a=1, b, c};
enum examples example1=2;
enum examples aswer(void)
{
    return example1;
}
int main()
{
    (aswer()==a)? printf("yes"): printf("no");
    return 0;
}// output no