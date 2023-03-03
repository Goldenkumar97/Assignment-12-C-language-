//Write a recursive function to print square of first n natural numbers.
#include"stdio.h"
void square(int n);
int main()
{
    square(20);
    return 0;
}
void square(int n)
{
    if(n==0)
    return;
    square(n-1);
    printf(" %d",n*n);
}