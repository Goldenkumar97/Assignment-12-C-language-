//Wrtie a recursive function to print first N ntural numbers.
#include"stdio.h"
void natural(int n);
int main()
{
    natural(19);
    return 0;
}
void natural(int n)
{
    if(n>1)
    natural(n-1);
    printf(" %d",n);
}