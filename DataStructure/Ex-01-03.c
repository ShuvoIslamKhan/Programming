#include <stdio.h>
int main()
{
    int T, i, j, n, sum = 0;
    scanf("%d\n", &T);
    for(i = 0; i < T; i++)
    {
        scanf("%d", &n);
        for(j = 1; j <= n; j++) sum += j;
        printf("Case %d: %d\n", i+1, sum*sum);
    }
    return 0;
}
