#include <stdio.h>
enum day {sunday=1, tueasday, wednesday, thursday, friday, saturday};
int main()
{
    enum day d=thursday;
    printf("\n%d",d);
    return 0;
}//output:4s