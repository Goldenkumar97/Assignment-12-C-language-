//Write a recursive function  to printf reverse of a given number.
#include"stdio.h"
void rev(int n);
int main()
{
    rev(56);
    return 0;
}
void rev( int n)
{
    if(n==0 )
    return;
    printf("%d",n%10);
    rev(n/10);
    
}