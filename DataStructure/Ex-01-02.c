#include <stdio.h>
int main()
{
    int T, i, n, sum;
    scanf("%d\n", &T);
    for(i = 0; i < T; i++)
    {
        scanf("%d", &n);
        sum = n * (n + 1) * (2 * n + 1) / 6;
        printf("Case %d: %d\n", i+1, sum);
    }
    return 0;
}
