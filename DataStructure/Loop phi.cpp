#include <bits/stdc++.h>
using namespace std;
int phi(int n)
{
    int ret = n, i;
    for(i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            while(n % i == 0)
            {
                n /= i;
            }
            ret -= ret / i;
        }
    }
    if(n > 1)
    {
        ret -= ret / n;
    }
    return ret;
}
int main()
{
    int T, n;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);
        printf("%d\n", phi(n));
    }
    return 0;
}
