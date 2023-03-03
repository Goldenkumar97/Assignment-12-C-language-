//WAR function to print octal of a given decimal number
#include <stdio.h>
void Binary(int n);
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d", &n);
    printf("binary of %d = ", n);
    Binary(n);
    return 0;
}
void Binary(int n)
{
    if (n== 0)
        return;
    Binary(n / 2);
    printf("%d", n % 2);
}