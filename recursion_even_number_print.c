#include<stdio.h>
void recersion(int n)
{
    if (n==101)
    {
        return;
    }
    if (n%2==0)
    {
       printf("%d\n", n);
    }
    recersion(n+1);
}
int main()
{
    int i = 1;
    recersion(i);
    return 0;
}