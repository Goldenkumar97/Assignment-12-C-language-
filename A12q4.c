//Write a recursive function to print first n odd numbers in reverse number.
#include"stdio.h"
void rev(int );
int main()
{
    rev(10);
    return 0;
}
void rev(int n)
{
    if(n==0)
    return ;
    printf(" %d",2*n-1);
    rev(n-1);
}