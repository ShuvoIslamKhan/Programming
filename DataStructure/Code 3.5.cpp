#include<bits/stdc++.h>
int gcd(int a, int b)
{
    if(b==0) return a;
    else if(a%b==0) return b;
    return gcd(b, a%b);
}
int main()
{
    int T, a, b;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", gcd(a, b));
    }
    return 0;
}
