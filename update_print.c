#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], x, v;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    scanf("%d", &v);

    // printf("%d ", v);
    for (int i = n - 1; i >= 0; i--)
    {
        a[x] = v;
        printf("%d ", a[i]);
    }

    return 0;
}