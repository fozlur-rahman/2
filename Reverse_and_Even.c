#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n], even[n / 2], count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (i % 2 == 0)
        {
            even[count++] = a[i];
        }
    }
    for (int i = count - 1; i >= 0; i--)
    {
        printf("%d ", even[i]);
    }

    return 0;
}