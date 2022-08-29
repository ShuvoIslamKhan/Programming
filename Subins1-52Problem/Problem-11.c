#include <stdio.h>
int main()
{
    int T, N, i, fact;
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &N);
        unsigned long int fact = 1;
        for(i = 2; i < N; i++)
        {
            fact = fact*i;
        }
    }
    printf("%lu\n", fact);
    return 0;
}
