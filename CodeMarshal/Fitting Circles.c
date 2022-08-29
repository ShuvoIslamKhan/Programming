#include <stdio.h>
#include <math.h>
int main()
{
    int T, R, n;
    double x, r;
    scanf("%d\n", &T);
    while(T--)
    {
        scanf("%d", &R);
        scanf("%d", &n);
        x = sin(3.1416 / n);
        r = (R * x) / (1 + x);
        printf("%0.2lf\n", r);
    }
    return 0;
}
