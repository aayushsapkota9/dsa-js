// lecture 58
#include <stdio.h>
void funB(int);
void funA(int n)
{
    if (n > 0)
    {
        printf("%d \n", n);
        funB(n - 1);
    }
}
void funB(int n)
{
    if (n > 0)
    {
        printf("%d \n", n);
        funB(n / 2);
    }
}
void main()
{
    funA(20);
    return;
}