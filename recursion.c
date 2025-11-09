#include<stdio.h>
void hello()
{
    printf("Hello World!\n");
    hello();
}
int main()
{
    printf("Welcome Hasib\n");
    hello();
    return 0;
}