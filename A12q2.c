//Write a recursive funtion to print n natural numbers  in reverse order. 
#include"stdio.h"
void natural(int n);
int main()
{
    natural(10);
    return 0;
}
void natural(int n)
{
    if(n==0)
    return;
    printf(" %d",n);
    natural(n-1);
    
}