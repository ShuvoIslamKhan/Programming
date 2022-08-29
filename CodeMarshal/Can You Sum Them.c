#include <stdio.h>
int main()
{
    int n, x, i, j,sum = 0;
    int ara[10001];
    scanf("%d\n", &n);
    for(i=1; i<=n; i++)
    {
        scanf("%d", ara);
        sum = sum + ara[i+2];
        printf("%d", sum);
    }
    return 0;
}
