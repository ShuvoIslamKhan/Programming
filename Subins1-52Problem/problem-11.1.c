#include<stdio.h>
int main()
{
    int T, i;
    unsigned long int N;
    scanf("%d",&N);
    for(i = 0; i <= T; i++){
        scanf("%lu", &N);
        unsigned long long int fact = 1, i;
        for (i=2;i<=N;i++)
        {
            fact=fact*i;
        }
        printf("%lu\n",fact);
    }
    return 0;
}
