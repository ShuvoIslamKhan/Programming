#include <stdio.h>
int main()
{
    int T, num, i, j;
    scanf("%d", &T);
    for(i = 1; i <= T; i++)
    {
        scanf("%d", &num);
        printf("case %d:", i);
        for(j = 1; j <= num; j++)
        {
            if(num % j == 0)
            {
                printf(" %d", j);
            }
        }
        printf("\n");
    }
    return 0;
}
