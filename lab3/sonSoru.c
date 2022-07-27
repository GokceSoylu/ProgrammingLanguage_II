#include<stdio.h> 
char f1(int b); 
int main()
{
    char a; 
    a=f1(10); 
    printf("%c",a);
}
char f1(int b) 
{
    printf("a"); 
    if(b<=8)
        return 'a'; 
    else
    {       
        printf("a"); f1(b--);//amaaan bu nasil soru
    }    
}