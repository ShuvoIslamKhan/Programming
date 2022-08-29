#include <stdio.h>
int bigmod(int a, int b, int M)
{
    if(b == 0) return 1 % M;
    int x = bigmod(a, b/2, M);
    x = (x * x) % M;
    if(b % 2 == 1) x = (x * a) % M;
    return x;
}
int main()
{
    int T, a, b, M;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %d %d", &a, &b, &M);
        printf("%d\n", bigmod(a, b, M));
    }
    return 0;
}
