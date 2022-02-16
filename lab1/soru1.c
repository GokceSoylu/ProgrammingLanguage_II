#include <stdio.h>
int x=5;
int main()
{
    {
        int x=10, y=20;
        {
            printf("\nx = %d, y = %d\n",x,y);
            {
                int y=40;
                x++;
                y++;
                printf("\ny = %d, x= %d\n",x,y);

            }
            printf("\nx = %d, y = %d\n",x,y);
        }
        printf("\nx = %d, y = %d\n",x,y);
    }    
    printf("\nx = %d",x);
    return 0;
}