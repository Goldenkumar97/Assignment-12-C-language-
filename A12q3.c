//Write a recursive function to print first n odd numbers.
#include"stdio.h"
void printodd(int );
int main()
{
    printodd(10);
    return 0;
}
void printodd(int n )
{
    if(n==0)
    return;
    printodd(n-1);
    printf(" %d",2*n-1);
}