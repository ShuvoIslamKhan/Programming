#include <stdio.h>
int main()
{
    int T, sum;
    char ara[5];
    scanf("%d", &T);
    while(T--)
    {
        scanf("%s", &ara);
        sum = ara[1] + ara[5];
        printf("Sum = %d\n", sum);
    }
    return 0;
}
