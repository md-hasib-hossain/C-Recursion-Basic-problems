#include <stdio.h>
void recursion(int i)
{
    if (i == 0)
    {
        return;
    }

    printf("I love Recursion\n");
    recursion(i - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    recursion(n);
    return 0;
} 

/*
Given a number N
. Print "I love Recursion" N
 times.

Note: Solve this problem using recursion.

Input
Only one line containing a number N
 (1≤N≤100)
 .

Output
Print "I love Recursion" N
 times.

Example
InputCopy
3
OutputCopy
I love Recursion
I love Recursion
I love Recursion

*/