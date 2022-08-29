#include <stdio.h>
int main()
{
    int T, i, n, sum;
    scanf("%d\n", &T);
    for(i = 0; i < T; i++)
    {
        scanf("%d", &n);
        sum = ((n * n + n) * (2 * n + 4)) / 12;
        printf("Case %d: %d\n", i+1, sum);
    }
    return 0;
}
