#include <stdio.h>

void arra_print(int n, int a[], int i)
{
    if (i==n)
    {
        return;
    }
    
    printf("%d\n", a[i]);

    arra_print(n, a, i + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    arra_print(n, a, 0);

    return 0;
}