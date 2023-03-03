//Write a recursive function to print octal of a given decimal number.
#include"stdio.h"
void octal(int n);
int main()
{
    octal(79);
    return 0;
}
void octal(int n)
{
    if(n==0)
    return;
    if(n / 8);
    printf(" %d",n % 8);
}