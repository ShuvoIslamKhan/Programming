#include <stdio.h>
int main()
{
    int t, n, i, x, sum;
    scanf("%d\n", &t);
    while(t--)
    {
        scanf("%d", &n);
        sum = 0;
        for(i = 1; i <= n; i++)
        {
            x = i * (i + 1) / 2;
            sum += x;
        }
        printf("sum is %d\n", sum);
    }
    return 0;
}
