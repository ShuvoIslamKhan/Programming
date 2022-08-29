#include <stdio.h>
int gcd(int a, int b)
{
    int temp;
    while(b!=0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main()
{
    int T, a, b, x;
    scanf("%d\n", &T);
    while(T--)
    {
        scanf("%d %d", &a, &b);
        x = gcd(a, b);
        printf("%d\n", x);
    }
    return 0;
}
