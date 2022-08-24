#include <stdio.h>
enum State {working=0, Failed, Freezed};
enum State curr_state=2;
enum State Find_state()
{
    return curr_state;
}
int main()
{
    (Find_state == working)? printf("morking"): printf("not working");
    return 0;
}//output not working
