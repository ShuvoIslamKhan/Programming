#include <stdio.h>
#include <math.h>
int main()
{
    int t, i, n, x;
    double sum;
    scanf("%d\n", &t);
    while(t--)
    {
        scanf("%d", &n);
        sum = 0;
        for(i=1; i<=n; i++)
        {
            sum += log10(i);
        }
        x = floor(sum) + 1;
        printf("%d\n", x);
    }
    return 0;
}
