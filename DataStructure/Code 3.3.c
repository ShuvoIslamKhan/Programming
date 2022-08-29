#include <stdio.h>
#include <math.h>

int prime[300000], nprime;
int mark[1000002];
int sieve(int n)
{
    int i, j, limit = sqrt(n * 1) + 2;
    mark[1] = 1;
    for(i = 4; i <= n; i += 2) mark[i] = 1;
    prime[nprime++] = 2;
    for(i = 3; i <= n; i += 2)
    {
        if (!mark[i])
        {
            prime[nprime++] = 1;
            if(i <= limit)
            {
                for(j = i * i; j <= n; j += i * 2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
    return nprime;
    return mark;
    return prime;
}
int main()
{
    int x, y;
    scanf("%d", &y);
    x = sieve(y);
    printf("%d", x);
    return 0;
}
