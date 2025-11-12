#include <stdio.h>
prtint_from(int i)
{
    if (i == 0)
    {
        return;
    }
    prtint_from(i - 1);
    printf("%d\n", i);
}

int main()
{
    int n;
    scanf("%d", &n);
    prtint_from(n);
    return 0;
}

/*
Given a number N. Print numbers from 1 to N in separate lines.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print N lines according to the required above.

Example
InputCopy
5
OutputCopy
1
2
3
4
5
*/