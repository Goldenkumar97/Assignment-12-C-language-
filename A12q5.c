//Write a recursive function to print first even numbers.
#include"stdio.h"
void even(int );
int main()
{
    even(10);
    return 0;
}
void even(int n)
{
    if(n==0)
    return;
    even(n-1);
    printf(" %d",2*n);
}