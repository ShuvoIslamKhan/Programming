#include <stdio.h>
int main()
{
    int T, i, j, k, n, r, m = 0, p = 0, a = 0, c, sum;
    scanf("%d\n", &T);
    for(c = 1; c <= T; c++)
    {
        scanf("%d %d", &n, &r);
        for(i = 2; i <= n; i++)
        {
            m *= i;
        }
        for(j = 2; j <= r; j++)
        {
            p *= j;
        }
        for(k = 2; k <= n-r; k++)
        {
            a *= k;
        }
        sum = m / (p * a);
        printf("Case %d: %d\n", c, sum);
    }
    return 0;
}
