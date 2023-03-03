//Write a recursive function to print first even numbers in revrse order.
#include"stdio.h"
void reveven(int n);
int main()
{
    reveven(20);
    return 0;
}
void reveven(int n)
{
    if(n==0)
    return;
    printf(" %d",2*n);
    reveven(n-1);
}