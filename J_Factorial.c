#include<stdio.h>
long long int factorial(int n)
{
    if (n==1)
    {
       return 1;
    }
    
   long long int mul = factorial(n-1);
    return n*mul;
}
int main()
{
   long long int n;
   scanf("%lld", &n);
   long long  int resulr = factorial(n);
   printf("%lld", resulr);

    return 0;
}
/*
Given a number N. Print factorial of N.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 20).

Output
Print the factorial of the number N.

Example
InputCopy
5
OutputCopy
120
*/