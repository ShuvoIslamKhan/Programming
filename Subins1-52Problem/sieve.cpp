#include<bits/stdc++.h>
using namespace std;
int prime[300000], nPrime=0;
int mark[1000002];
void sieve(int n)
{
    int i, j, limit = sqrt(n*1.)+2;
    for(int t=0; t < 1000002; t++)
    {
        mark[t] = 0;
    }
    for(int t=0; t < 300000; t++)
    {
        prime[t] = 0;
    }
    mark[1] = 1;
    for(i=4; i<=n; i+=2) mark[i]=1;
    prime[nPrime++] = 2;
    for(i =3; i <= n; i += 2)
    {
        if(!mark[i])
        {
            prime[nPrime++] = i;
            if(i <= limit)
            {
                for(j=i*i; j<=n; j+=i*2)
                {
                    mark[j] = 1;
                }
            }
        }
    }
}
int main()
{
    int n,x, T;
    scanf("%d", &T);
    while(T--)
    {
        int p;
        printf("press 1 for check, 2 for list or 3 for num\n");
        scanf("%d", &p);
        if(p==1)
        {
            int k;
            printf("plese enter the value: ");
            scanf("%d", &k);
            sieve(k);
            if(mark[k]==1) printf("%d is not a prime number\n", k);
            else printf("%d is a prime number\n", k);
        }
        else
        {
            printf("Enter the value of n: ");
            scanf("%d", &n);
            sieve(n);
            if(p==2)
            {
                for(int i=0; i<nPrime; i++)
                {
                    printf("%d ", prime[i]);
                }
                printf("\n");
            }
            else if(p==3) printf("%d\n", nPrime);
        }
        nPrime = 0;
    }
    return 0;
}
