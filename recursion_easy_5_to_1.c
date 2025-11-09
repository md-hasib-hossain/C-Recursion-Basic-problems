#include<stdio.h>

void recursion(int n)
{
    if (n==6)
    {
        return;
    }
    
    recursion(n+1);
    printf("%d\n", n);
}
int main()
{
    int i = 1;
    recursion(i);
    return 0;
}