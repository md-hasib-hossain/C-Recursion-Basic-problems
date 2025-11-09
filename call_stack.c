#include <stdio.h>
void cholo()
{
    printf("Cholo\n");
}
void gelo()
{
    printf("Gelo\n");
    cholo();
}
void hello()
{
    printf("Hello\n");
    gelo();
}
int main()
{
    printf("Hi!\n");
    hello();
    return 0;
}