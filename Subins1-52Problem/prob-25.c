#include<stdio.h>
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
    int T, a, b, y, x;
    scanf("%d\n", &T);
    while(T--)
    {
        scanf("%d %d", &a, &b);
        y = a * b;
        x = gcd(a, b);
        printf("LCM : %d\n", y/x);
    }
    return 0;
}
