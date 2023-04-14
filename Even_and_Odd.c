#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int evev_sum = 0;
    int odd_sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            evev_sum += a[i];
        }
        else
        {
            odd_sum += a[i];
        }
    }
    printf("%d %d", evev_sum, odd_sum);
    return 0;
}