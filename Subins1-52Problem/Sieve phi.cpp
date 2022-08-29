#include<bits/stdc++.h>
using namespace std;
vector<int>phi;
int mark[1000006];
void sievephi(int n)
{
    int i,j;
    for(i=1; i<=n; i++) phi[i]=i;
    phi[1]=1;
    mark[1]=1;
    for(i=2; i<=n; i++)
    {
        if(!mark[i])
        {
            for(j=i; j<=n; j+=i)
            {
                mark[j]=1;
                phi[j] = phi[j] / i * (i - 1);
            }
        }
    }
}
int main()
{
    int t;
    printf("Please enter test case number: ");
    scanf("%d", &t);
    while(t--)
    {
        int p, n;
        printf("press 1 for num, 2 for list: ");
        scanf("%d", &p);
        if(p==1)
        {
            printf("please enter the value of n: ");
            scanf("%d", &n);
            sievephi(n);
            printf("%d", phi[n]);
        }
        else if(p==2)
        {
            printf("please enter the value of n: ");
            scanf("%d", &n);
            sievephi(n);
            for(int i=1; i<=n; i++)
            {
                printf("%d ", phi[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
