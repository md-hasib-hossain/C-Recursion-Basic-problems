#include<stdio.h>
void recursion(int i)
{
    if (i == 6)
    {
        return;
    }
    
    printf("%d\n", i);
    recursion(i+1);
}
int main()
{
    int n = 1;
    recursion(n);
    return 0;
}