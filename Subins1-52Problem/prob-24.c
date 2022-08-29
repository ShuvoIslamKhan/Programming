#include <stdio.h>
int main()
{
    int T, n, i, j;
    int ara[10001];
    scanf("%d\n", &T);
    while(T--)
    {
        scanf("%d", &n);
        for(i=0; i<n; i++)
        {
            scanf("%d", &ara[i]);
        }
        for(j=0; j<n; j=j+2)
        {
            printf("%d ", ara[j]);
        }
        printf("\n");
    }
    return 0;
}
